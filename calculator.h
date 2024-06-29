#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class calculator;
}
QT_END_NAMESPACE

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    calculator(QWidget *parent = nullptr);
    ~calculator();

private slots:

    void on_ninebutton_clicked();

    void on_eightbutton_clicked();

    void on_sevenbutton_clicked();

    void on_sixbutton_clicked();

    void on_fivebutton_clicked();

    void on_fourbutton_clicked();

    void on_threebutton_clicked();

    void on_twobutton_clicked();

    void on_onebutton_clicked();

    void on_zerobutton_clicked();

    void on_clearbutton_clicked();

    void on_addbutton_clicked();

    void on_subtbutton_clicked();

    void on_multiplybutton_clicked();

    void on_dividebutton_clicked();

    void on_resultbutton_clicked();

private:
    Ui::calculator *ui;
    double num1;
    QString symbol;
};
#endif // CALCULATOR_H
