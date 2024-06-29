#include "calculator.h"
#include "ui_calculator.h"

calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);
     num1 = 0;
     symbol = "";
}

calculator::~calculator()
{
    delete ui;
}



void calculator::on_ninebutton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1+"9");
}


void calculator::on_eightbutton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1+"8");
}


void calculator::on_sevenbutton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1+ "7");
}


void calculator::on_sixbutton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1 + "6");
}


void calculator::on_fivebutton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1+ "5");
}


void calculator::on_fourbutton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1+ "4");
}


void calculator::on_threebutton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1+ "3");
}


void calculator::on_twobutton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1+ "2");
}


void calculator::on_onebutton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1+ "1");
}


void calculator::on_zerobutton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1+ "0");
}


void calculator::on_clearbutton_clicked()
{
    ui->outputLineEdit->setText("");
}



void calculator::on_addbutton_clicked()
{
    num1 = ui->outputLineEdit->text().toDouble();
    symbol = "+";
    ui->outputLineEdit->setText("");
}


void calculator::on_subtbutton_clicked()
{
    num1 = ui->outputLineEdit->text().toDouble();
    symbol = "-";
    ui->outputLineEdit->setText("");
}


void calculator::on_multiplybutton_clicked()
{
    num1 = ui->outputLineEdit->text().toDouble();
    symbol = "*";
    ui->outputLineEdit->setText("");
}


void calculator::on_dividebutton_clicked()
{
    num1 = ui->outputLineEdit->text().toDouble();
    symbol = "/";
    ui->outputLineEdit->setText("");
}


void calculator::on_resultbutton_clicked()
{
    double num2 = ui->outputLineEdit->text().toDouble();
    double result = 0;
    if(symbol == "+")
    {
        result = num1+num2;

    }
    else if(symbol == "-")
    {
        result = num1-num2;

    }
    else if(symbol == "*")
    {
        result = num1*num2;

    }
    else if(symbol == "/")
    {
        result = num1/num2;

    }
    ui->outputLineEdit->setText(QString::number(result));
}

