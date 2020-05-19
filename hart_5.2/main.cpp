#include "mainwindow.h"
#include <QApplication>
string wartosc_hex;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();  
    return a.exec();
}
