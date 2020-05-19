#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
#include <stdio.h>
#include <QRegExp>
#include <QRegExpValidator>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {

    ui->setupUi(this);
    QRegExp BINregExp("[0-1]{0,}");
    ui->frame_bytes->setValidator(new QRegExpValidator(BINregExp, this));
    connect(MainWindow::findChild<QPushButton *>("calculate"), SIGNAL(released()),this, SLOT(onCalculate()));
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::onCalculate() {
    frameBytes = ui->frame_bytes->text();
    string frame = frameBytes.toStdString();
    float character, index = 0, mantissa = 0, result;
    character = ((int)frame[0]-48) == 1 ? -1 : 1;

    for (int i = 8; i > 0; i--) {
        if((int)frame[i]-48 == 1) {
            index += pow(2, 8 - i);
        }
    }

    for (int i = 9 ;i < 32; i++) {
        if((int)frame[i]-48 == 1) {
            mantissa += pow(2, 8 - i);
        }
    }

    result = character * pow(2, index - 127) * (mantissa + 1);
    stringstream ss;
    ss << int(result);
    string binaryResult = toBinary((int)result);

    ui->frame_hexadecimal->setText(QString::fromStdString(binaryToHex(binaryResult)));
    ui->frame_binary->setText(QString::fromStdString(binaryResult));
    ui->frame_decimal->setText(QString::fromStdString(ss.str()));

    hexValue.clear();
}

string MainWindow::toBinary(int value) {
    string indexInBinary, mantissaInBinary;

    hexValue += (value > 0) ? '1' : '0';
    int temporaryValue = 0, i =- 1, previous;
    do {
        previous = temporaryValue;
        i++;
        temporaryValue = pow(2,i);
    } while (value >= temporaryValue);

    indexInBinary = decimalToBinary(i - 1);
    for(int j = 0; j < (int)(7 - indexInBinary.length()); j++){
        hexValue.append("0");
    }
    hexValue.append(indexInBinary);
    mantissaInBinary = decimalToBinary(value-previous);

    switch (decimalToBinary(value-previous).length() % 4) {
        case 1:
            hexValue.append("000"); break;
        case 2:
            hexValue.append("00"); break;
        case 3:
            hexValue.append("0"); break;
    }

    hexValue.append(mantissaInBinary);
    int length = hexValue.length();
    for(int k = 0; k < (32 - length); k++){
        hexValue.append("0");
    }
    return hexValue;
}

string MainWindow::decimalToBinary(int value) {
    string result;
    int binaryNum[32], i = 0;
    while (value > 0) {
        binaryNum[i] = value % 2;
        value = value / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        stringstream ss;
        ss << binaryNum[j];
        result.append(ss.str());
    }
    return result;
}

string MainWindow::binaryToHex(string value) {
    string result;
    for (int i = 0; i < (int)value.length(); i += 4) {
        int n = 0;
        for (int j = i; j < i + 4; ++j) {
            n <<= 1;
            if(value[j] == '1')
                n |= 1;
        }
        if (n <= 9)
            result.push_back('0' + n);
        else
            result.push_back('A' + n - 10);
    }
    return result;
}
