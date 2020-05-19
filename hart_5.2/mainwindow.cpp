#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QRegExp>
#include <QRegExpValidator>
#include <cmath>
#include <string>
#include <stdio.h>
#include <sstream>

using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);

    QRegExp BINregExp("[0-1]{0,}");
    ui->frame_bytes->setValidator(new QRegExpValidator(BINregExp, this));
    connect(MainWindow::findChild<QPushButton *>("calculate"), SIGNAL(released()),this, SLOT(onCalculate()));
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::onCalculate() {
    frameBytes = ui->frame_bytes->text();
    string frame=frameBytes.toStdString();
    int character, index = 0, mantissa = 0, result;
    character = (int)frame[0]-48;
    character = character == 1 ? 1: -1;

    for (int i = 7; i > 0; i--) {
        if((int)frame[i]-48 == 1) {
            index += pow(2, 7 - i);
        }
    }
    int temporary = 31;
    while ((int)frame[temporary]-48 == 0) {
        temporary --;
        if (temporary == 8) {
            break;
        }
    }
    for(int i = temporary ;i > 7; i--){
        if((int)frame[i]-48 == 1) {
            mantissa += pow(2, temporary - i);
        }
    }
    result = character*(pow(2, index) + mantissa);
    stringstream ss;
    ss << result;
    string str = ss.str();
    floatUnion number;
    number.f = result;
    string binaryResult = toBinary(number);
    ui->frame_hexadecimal->setText(QString::fromStdString(binaryToHex(binaryResult)));
    ui->frame_binary->setText(QString::fromStdString(binaryResult));
    ui->frame_decimal->setText(QString::fromStdString(ss.str()));
    hexValue.clear();
}

string MainWindow:: toBinary(floatUnion value) {
    stringstream ss;
    ss << value.raw.character;
    hexValue.append(ss.str());
    hexValue = printBinary(value.raw.index, 8, hexValue);
    hexValue = printBinary(value.raw.mantissa, 23, hexValue);
    return hexValue;
}

string MainWindow::printBinary(int n, int i, string hexValue) {
    for (int k = i - 1; k >= 0; k--) {
        hexValue += (n >> k) & 1 ? '1' : '0';
    }
    return hexValue;
}

string MainWindow::binaryToHex(string value) {
    string result;
    for (int i = 0; i < (int)value.length(); i += 4) {
        int n = 0;
        for (int j = i; j < i + 4; ++j) {
            n <<= 1;
            if (value[j] == '1')
                n |= 1;
        }
        if (n <= 9)
            result.push_back('0' + n);
        else
            result.push_back('A' + n - 10);
    }
    return result;
}
