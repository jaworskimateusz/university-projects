/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_1;
    QLineEdit *byteCode;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *numberOfReps;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *crc16;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *time;
    QPushButton *calculate;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(515, 469);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMaximumSize(QSize(500, 400));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 0, 491, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_1 = new QLabel(verticalLayoutWidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(15);
        label_1->setFont(font);
        label_1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	height: '34px';\n"
"}"));
        label_1->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_1);

        byteCode = new QLineEdit(verticalLayoutWidget);
        byteCode->setObjectName(QString::fromUtf8("byteCode"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(14);
        byteCode->setFont(font1);
        byteCode->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"margin: '5px';\n"
"}"));
        byteCode->setMaxLength(256);
        byteCode->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(byteCode);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 80, 491, 81));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	height: '34px';\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        numberOfReps = new QLineEdit(verticalLayoutWidget_2);
        numberOfReps->setObjectName(QString::fromUtf8("numberOfReps"));
        numberOfReps->setFont(font1);
        numberOfReps->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"margin: '5px';\n"
"}"));
        numberOfReps->setMaxLength(256);
        numberOfReps->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(numberOfReps);

        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 160, 491, 81));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	height: '34px';\n"
"}"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        crc16 = new QLineEdit(verticalLayoutWidget_3);
        crc16->setObjectName(QString::fromUtf8("crc16"));
        crc16->setFont(font1);
        crc16->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"margin: '5px';\n"
"}"));
        crc16->setMaxLength(256);
        crc16->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(crc16);

        verticalLayoutWidget_4 = new QWidget(centralWidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 239, 491, 81));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(true);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	height: '34px';\n"
"}"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        time = new QLineEdit(verticalLayoutWidget_4);
        time->setObjectName(QString::fromUtf8("time"));
        time->setFont(font1);
        time->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"margin: '5px';\n"
"}"));
        time->setMaxLength(256);
        time->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(time);

        calculate = new QPushButton(centralWidget);
        calculate->setObjectName(QString::fromUtf8("calculate"));
        calculate->setGeometry(QRect(400, 330, 101, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        calculate->setFont(font2);
        calculate->setIconSize(QSize(24, 24));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 515, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_1->setText(QCoreApplication::translate("MainWindow", "Byte Code:   ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number of reps:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "CRC16:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Time [ms]:", nullptr));
        calculate->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
