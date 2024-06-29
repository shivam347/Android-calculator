/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *outputLineEdit;
    QPushButton *ninebutton;
    QPushButton *dividebutton;
    QPushButton *resultbutton;
    QPushButton *clearbutton;
    QPushButton *eightbutton;
    QPushButton *sevenbutton;
    QPushButton *sixbutton;
    QPushButton *multiplybutton;
    QPushButton *fourbutton;
    QPushButton *fivebutton;
    QPushButton *threebutton;
    QPushButton *subtbutton;
    QPushButton *onebutton;
    QPushButton *twobutton;
    QPushButton *addbutton;
    QPushButton *zerobutton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName("calculator");
        calculator->resize(407, 564);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        calculator->setFont(font);
        calculator->setStyleSheet(QString::fromUtf8("background-color:black"));
        centralwidget = new QWidget(calculator);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 401, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color:yellow"));
        outputLineEdit = new QLineEdit(centralwidget);
        outputLineEdit->setObjectName("outputLineEdit");
        outputLineEdit->setGeometry(QRect(10, 60, 391, 131));
        QFont font2;
        font2.setPointSize(24);
        outputLineEdit->setFont(font2);
        outputLineEdit->setStyleSheet(QString::fromUtf8("background-color:grey"));
        ninebutton = new QPushButton(centralwidget);
        ninebutton->setObjectName("ninebutton");
        ninebutton->setGeometry(QRect(10, 200, 91, 71));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setItalic(true);
        ninebutton->setFont(font3);
        ninebutton->setStyleSheet(QString::fromUtf8("background-color:white;"));
        dividebutton = new QPushButton(centralwidget);
        dividebutton->setObjectName("dividebutton");
        dividebutton->setGeometry(QRect(310, 200, 91, 71));
        dividebutton->setFont(font3);
        dividebutton->setStyleSheet(QString::fromUtf8(" background-color : orange;"));
        resultbutton = new QPushButton(centralwidget);
        resultbutton->setObjectName("resultbutton");
        resultbutton->setGeometry(QRect(210, 200, 91, 71));
        resultbutton->setFont(font3);
        resultbutton->setStyleSheet(QString::fromUtf8(" background-color : orange;"));
        clearbutton = new QPushButton(centralwidget);
        clearbutton->setObjectName("clearbutton");
        clearbutton->setGeometry(QRect(110, 200, 91, 71));
        clearbutton->setFont(font3);
        clearbutton->setStyleSheet(QString::fromUtf8(" background-color : orange;"));
        eightbutton = new QPushButton(centralwidget);
        eightbutton->setObjectName("eightbutton");
        eightbutton->setGeometry(QRect(10, 280, 91, 71));
        eightbutton->setFont(font3);
        eightbutton->setStyleSheet(QString::fromUtf8(" background-color : white;"));
        sevenbutton = new QPushButton(centralwidget);
        sevenbutton->setObjectName("sevenbutton");
        sevenbutton->setGeometry(QRect(110, 280, 91, 71));
        sevenbutton->setFont(font3);
        sevenbutton->setStyleSheet(QString::fromUtf8(" background-color : white;\n"
""));
        sixbutton = new QPushButton(centralwidget);
        sixbutton->setObjectName("sixbutton");
        sixbutton->setGeometry(QRect(210, 280, 91, 71));
        sixbutton->setFont(font3);
        sixbutton->setStyleSheet(QString::fromUtf8(" background-color : white;"));
        multiplybutton = new QPushButton(centralwidget);
        multiplybutton->setObjectName("multiplybutton");
        multiplybutton->setGeometry(QRect(310, 280, 91, 71));
        multiplybutton->setFont(font3);
        multiplybutton->setStyleSheet(QString::fromUtf8(" background-color : orange;"));
        fourbutton = new QPushButton(centralwidget);
        fourbutton->setObjectName("fourbutton");
        fourbutton->setGeometry(QRect(110, 360, 91, 71));
        fourbutton->setFont(font3);
        fourbutton->setStyleSheet(QString::fromUtf8(" background-color : white;"));
        fivebutton = new QPushButton(centralwidget);
        fivebutton->setObjectName("fivebutton");
        fivebutton->setGeometry(QRect(10, 360, 91, 71));
        fivebutton->setFont(font3);
        fivebutton->setStyleSheet(QString::fromUtf8(" background-color : white;"));
        threebutton = new QPushButton(centralwidget);
        threebutton->setObjectName("threebutton");
        threebutton->setGeometry(QRect(210, 360, 91, 71));
        threebutton->setFont(font3);
        threebutton->setStyleSheet(QString::fromUtf8(" background-color : white;"));
        subtbutton = new QPushButton(centralwidget);
        subtbutton->setObjectName("subtbutton");
        subtbutton->setGeometry(QRect(310, 360, 91, 71));
        subtbutton->setFont(font3);
        subtbutton->setStyleSheet(QString::fromUtf8(" background-color : orange;"));
        onebutton = new QPushButton(centralwidget);
        onebutton->setObjectName("onebutton");
        onebutton->setGeometry(QRect(110, 440, 91, 71));
        onebutton->setFont(font3);
        onebutton->setStyleSheet(QString::fromUtf8(" background-color : white;"));
        twobutton = new QPushButton(centralwidget);
        twobutton->setObjectName("twobutton");
        twobutton->setGeometry(QRect(10, 440, 91, 71));
        twobutton->setFont(font3);
        twobutton->setStyleSheet(QString::fromUtf8(" background-color : white;"));
        addbutton = new QPushButton(centralwidget);
        addbutton->setObjectName("addbutton");
        addbutton->setGeometry(QRect(310, 440, 91, 71));
        addbutton->setFont(font3);
        addbutton->setStyleSheet(QString::fromUtf8(" background-color : orange;"));
        zerobutton = new QPushButton(centralwidget);
        zerobutton->setObjectName("zerobutton");
        zerobutton->setGeometry(QRect(210, 440, 91, 71));
        zerobutton->setFont(font3);
        zerobutton->setStyleSheet(QString::fromUtf8(" background-color : white;"));
        calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 407, 26));
        calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(calculator);
        statusbar->setObjectName("statusbar");
        calculator->setStatusBar(statusbar);

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QMainWindow *calculator)
    {
        calculator->setWindowTitle(QCoreApplication::translate("calculator", "calculator", nullptr));
        label->setText(QCoreApplication::translate("calculator", "           CALCULATOR", nullptr));
        ninebutton->setText(QCoreApplication::translate("calculator", "9", nullptr));
        dividebutton->setText(QCoreApplication::translate("calculator", "/", nullptr));
        resultbutton->setText(QCoreApplication::translate("calculator", "=", nullptr));
        clearbutton->setText(QCoreApplication::translate("calculator", "Clear", nullptr));
        eightbutton->setText(QCoreApplication::translate("calculator", "8", nullptr));
        sevenbutton->setText(QCoreApplication::translate("calculator", "7", nullptr));
        sixbutton->setText(QCoreApplication::translate("calculator", "6", nullptr));
        multiplybutton->setText(QCoreApplication::translate("calculator", "*", nullptr));
        fourbutton->setText(QCoreApplication::translate("calculator", "4", nullptr));
        fivebutton->setText(QCoreApplication::translate("calculator", "5", nullptr));
        threebutton->setText(QCoreApplication::translate("calculator", "3", nullptr));
        subtbutton->setText(QCoreApplication::translate("calculator", "-", nullptr));
        onebutton->setText(QCoreApplication::translate("calculator", "1", nullptr));
        twobutton->setText(QCoreApplication::translate("calculator", "2", nullptr));
        addbutton->setText(QCoreApplication::translate("calculator", "+", nullptr));
        zerobutton->setText(QCoreApplication::translate("calculator", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
