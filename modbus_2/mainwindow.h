#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
#include <QElapsedTimer>
#include <QByteArray>
#include <QString>

using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

    static const uint32_t MAX_LENGTH = 256;
    QString byteCode;
    int numberOfReps;
    int registry;
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void calculate();
    std::string toHex(int decimal);
private slots:
    void onCalculate();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
