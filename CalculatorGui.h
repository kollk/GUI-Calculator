
#ifndef GRIDLAYOUTDIALOG
#define GRIDLAYOUTDIALOG


#include <QLineEdit>
#include <QDialog>
#include "calculator.h"


class CalculatorGui : public QDialog
{
    Q_OBJECT

private:

public:

    CalculatorGui(QWidget *parent = 0);


    QPushButton* buttonDiv;
    QPushButton* buttonMult;
    QPushButton* buttonPlus ;
    QPushButton* ButtonSub;
    QPushButton* buttonEquals ;
    QPushButton* buttonPoint;
    QPushButton* buttonRec;
    QPushButton* buttonMod;
    QPushButton* buttonSqrt;
    QPushButton* buttonClear;


    QPushButton* button0;
    QPushButton* button1;
    QPushButton* button2;
    QPushButton* button3;
    QPushButton* button4;
    QPushButton* button5 ;
    QPushButton* button6 ;
    QPushButton* button7 ;
    QPushButton* button8;
    QPushButton* button9 ;

     ~CalculatorGui();

private:

    QPushButton* lastButtonPressed;
    Calculator calculatorEngine;
    QLineEdit* lineEdit;



public slots:
    void buttonPressed();

};

#endif // GRIDLAYOUTDIALOG
