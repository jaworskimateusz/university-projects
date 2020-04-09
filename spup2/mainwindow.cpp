#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

#include <QRegExp>
#include <QtCore/QtEndian>
#include <QShortcut>
#include <QDebug>
#include <QRegExpValidator>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);

    QRegExp HEXregExp("[A-Fa-f0-9]{0,}");
    QRegExp NUMregExp("[0-9]{0,}");
    ui->byteCode->setValidator(new QRegExpValidator(HEXregExp, this));
    ui->numberOfReps->setValidator(new QRegExpValidator(NUMregExp, this));
    connect(MainWindow::findChild<QPushButton *>("calculate"), SIGNAL(released()),this, SLOT(onCalculate()));

}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::onCalculate() {
    ui->time->setText(QString::number(0));
    ui->crc16->setText(QString::number(0));
    byteCode = ui->byteCode->text();
    numberOfReps = ui->numberOfReps->text().toInt();

    QElapsedTimer timer;
    if(byteCode.length() % 2 == 0) {
        timer.start();
        for (int i = 0; i < numberOfReps; i++) {
            registry = 0xFFFF;
            for (int j = 0; j < byteCode.length(); j += 2) {
                registry ^= stoul(byteCode.mid(j,2).toStdString(), NULL, 16);
                for (int k = 0; k < 8; k++) {
                    if (registry & 0x0001) {
                        registry >>= 1;
                        registry ^= 0xA001;
                    } else {
                        registry >>= 1;
                    }
                }
            }
        }
        ui->crc16->setText(QString::fromStdString(toHex(registry & 0xFF)) + QString::fromStdString(toHex(registry >> 8)));
        ui->time->setText(QString::number(timer.elapsed()));
    }
}

std::string MainWindow::toHex(int decimal) {
int residual;
std::string hex = "";
while (decimal > 0) {
  residual = decimal % 16;
  if (residual > 9) {
    switch (residual) {
      case 10: hex = "A" + hex; break;
      case 11: hex = "B" + hex; break;
      case 12: hex = "C" + hex; break;
      case 13: hex = "D" + hex; break;
      case 14: hex = "E" + hex; break;
      case 15: hex = "F" + hex; break;
    }
  } else {
    hex = char(residual + 48) + hex;
  }
  decimal = decimal/16;
 }
 return hex;
}



