#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <string>
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
#include <QString>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
    QString frameBytes;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    string toBinary(int value);
    string binaryToHex(string value);
    string decimalToBinary(int value);
private slots:
    void onCalculate();
private:
    Ui::MainWindow *ui;
    string hexValue;
};

#endif // MAINWINDOW_H
