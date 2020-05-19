#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QDebug>
#include <string>
#include <math.h>
#include <time.h>
#include <QString>
#include <iostream>
#include <cstdlib>

using namespace std;

//https://stackoverflow.com/questions/15685181/how-to-get-the-sign-mantissa-and-exponent-of-a-floating-point-number
typedef union {
    float f;
    struct {
        unsigned int mantissa : 23;
        unsigned int index : 8;
        unsigned int character : 1;
    } raw;
} floatUnion;
namespace Ui{
class MainWindow;
}

class MainWindow : public QMainWindow{
    Q_OBJECT
    QString frameBytes;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    string printBinary(int n, int i, string hexValue);
    string binaryToHex(string value);
    string toBinary(floatUnion value);
private slots:
    void onCalculate();
private:
    string hexValue;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
