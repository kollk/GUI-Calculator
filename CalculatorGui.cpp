

#include "CalculatorGui.h"
#include "Calculator.h"
#include <QPushButton>
#include <QSizePolicy>
#include <QLineEdit>
#include <string>
#include <QDialog>
#include <iostream>
#include <QLabel>
#include <QGridLayout>


using namespace std;

CalculatorGui::CalculatorGui(QWidget *parent) :
    QDialog(parent)
{
    //buttons for numbers
    button0 = new QPushButton("0");
    button1 = new QPushButton("1");
    button2 = new QPushButton("2");
    button3 = new QPushButton("3");
    button4 = new QPushButton("4");
    button5 = new QPushButton("5");
    button6 = new QPushButton("6");
    button7 = new QPushButton("7");
    button8 = new QPushButton("8");
    button9 = new QPushButton("9");

    //buttons for operators
    buttonDiv = new QPushButton("/");
    buttonMult = new QPushButton("X");
    buttonPlus = new QPushButton("+");
    ButtonSub = new QPushButton("-");
    buttonEquals = new QPushButton("=");
    buttonPoint = new QPushButton(".");
    buttonRec = new QPushButton("1/x");
    buttonMod = new QPushButton("%");
    buttonSqrt = new QPushButton("√X");
    buttonClear = new QPushButton("C");
    //--------------------------

    QHBoxLayout* bottomishpanel = new QHBoxLayout;
    bottomishpanel->addWidget(button0);
    bottomishpanel->addWidget(buttonPoint);
    bottomishpanel->addWidget(buttonPlus);
    bottomishpanel->addWidget(buttonEquals);
    bottomishpanel->addStretch();

    QHBoxLayout* bottomPannel = new QHBoxLayout;
    bottomPannel->addWidget(button1);
    bottomPannel->addWidget(button2);
    bottomPannel->addWidget(button3);
    bottomPannel->addWidget(ButtonSub);
    bottomPannel->addStretch();

    QHBoxLayout* middlePannel = new QHBoxLayout;
    middlePannel->addWidget(button4);
    middlePannel->addWidget(button5);
    middlePannel->addWidget(button6);
    middlePannel->addWidget(buttonMult);
    middlePannel->addWidget(buttonRec);
    middlePannel->addStretch();

    QHBoxLayout* topPannel = new QHBoxLayout;
    topPannel->addWidget(button7);
    topPannel->addWidget(button8);
    topPannel->addWidget(button9);
    topPannel->addWidget(buttonDiv);
    topPannel->addWidget(buttonMod);
    topPannel->addStretch();

    QHBoxLayout* moreSoTopPannel = new QHBoxLayout;
    moreSoTopPannel->addWidget(buttonSqrt);
    moreSoTopPannel->addWidget(buttonClear);
    moreSoTopPannel->addStretch();

    QHBoxLayout* console = new QHBoxLayout;
    lineEdit = new QLineEdit("");
    console->addWidget(lineEdit);

    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->addLayout(console);
    mainLayout->addLayout(moreSoTopPannel);
    mainLayout->addLayout(topPannel);
    mainLayout->addLayout(middlePannel);
    mainLayout->addLayout(bottomPannel);
    mainLayout->addLayout(bottomishpanel);

    setLayout(mainLayout);

   //wiring the events


    //operands
    connect(buttonDiv, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));
    connect(buttonMult, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));
    connect(buttonPlus, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));
    connect(ButtonSub, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));
    connect(buttonEquals, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));
    connect(buttonPoint, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));
    connect(buttonRec, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));
    connect(buttonMod, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));
    connect(buttonSqrt, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));
    connect(buttonClear, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));
    //button numbers
    connect(button0, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));
    connect(button1, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));
    connect(button2, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));
    connect(button3, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));
    connect(button4, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));
    connect(button5, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));
    connect(button6, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));
    connect(button7, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));
    connect(button8, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));
    connect(button9, SIGNAL(clicked()),
            this, SLOT(buttonPressed()));

}


void CalculatorGui::buttonPressed(){
    QObject* mySender = QObject::sender();

    if(mySender == button1){
        QString text = lineEdit->text();
        if(text.contains("+") || text.contains("X")|| text.contains("/")
          || text.contains("-") || text.contains("%") || text.contains("√")){
            lineEdit->setText("");
        }
        lineEdit->setText(lineEdit->text()+ "1");
    }


    else if(mySender == button2){
        QString text = lineEdit->text();
        if(text.contains("+") || text.contains("X")|| text.contains("/")
          || text.contains("-") || text.contains("%") || text.contains("√")){
            lineEdit->setText("");
        }
        lineEdit->setText(lineEdit->text()+ "2");
    }


    else if(mySender == button3){
        QString text = lineEdit->text();
        if(text.contains("+") || text.contains("X")|| text.contains("/")
          || text.contains("-") || text.contains("%") || text.contains("√")){
            lineEdit->setText("");
        }
        lineEdit->setText(lineEdit->text()+ "3");
    }


    else if(mySender == button4){
        QString text = lineEdit->text();
        if(text.contains("+") || text.contains("X")|| text.contains("/")
          || text.contains("-") || text.contains("%") || text.contains("√")){
            lineEdit->setText("");
        }
        lineEdit->setText(lineEdit->text()+ "4");
    }


    else if(mySender == button5){
        QString text = lineEdit->text();
        if(text.contains("+") || text.contains("X")|| text.contains("/")
          || text.contains("-") || text.contains("%") || text.contains("√")){
            lineEdit->setText("");
        }
        lineEdit->setText(lineEdit->text()+ "5");
    }

    else if(mySender == button6){
        QString text = lineEdit->text();
        if(text.contains("+") || text.contains("X")|| text.contains("/")
          || text.contains("-") || text.contains("%") || text.contains("√")){
            lineEdit->setText("");
        }
        lineEdit->setText(lineEdit->text()+ "6");
    }


    else if(mySender == button7){
        QString text = lineEdit->text();
        if(text.contains("+") || text.contains("X")|| text.contains("/")
          || text.contains("-") || text.contains("%") || text.contains("√")){
            lineEdit->setText("");
        }
        lineEdit->setText(lineEdit->text()+ "7");
    }

    else if(mySender == button8){
        QString text = lineEdit->text();
        if(text.contains("+") || text.contains("X")|| text.contains("/")
          || text.contains("-") || text.contains("%") || text.contains("√")){
            lineEdit->setText("");
        }
        lineEdit->setText(lineEdit->text()+ "8");
    }

    else if(mySender == button9){
        QString text = lineEdit->text();
        if(text.contains("+") || text.contains("X")|| text.contains("/")
          || text.contains("-") || text.contains("%") || text.contains("√")){
            lineEdit->setText("");
        }
        lineEdit->setText(lineEdit->text()+ "9");
    }


    else if(mySender == button0){
        QString text = lineEdit->text();
        if(text.contains("+") || text.contains("X")|| text.contains("/")
          || text.contains("-") || text.contains("%") || text.contains("√")){
            lineEdit->setText("");
        }
        lineEdit->setText(lineEdit->text()+ "0");
    }

//----------- + / - X buttons---------------

    else if(mySender == buttonPlus){
        QString text = lineEdit->text();
        bool ok;
        double x = text.toDouble(&ok);
        if(ok) {
            calculatorEngine.store(x);
            lineEdit->setText("+");
            calculatorEngine.handleOperation(Calculator::ADD);

        }
    }


    else if(mySender == buttonDiv){
        QString text = lineEdit->text();
        bool ok;
        double x = text.toDouble(&ok);
        if(ok) {
            calculatorEngine.store(x);
            lineEdit->setText("/");
            calculatorEngine.handleOperation(Calculator::DIVIDE);
        }
    }

    else if(mySender == buttonMult){
        QString text = lineEdit->text();
        bool ok;
        double x = text.toDouble(&ok);
        if(ok) {
            calculatorEngine.store(x);
            lineEdit->setText("X");
            calculatorEngine.handleOperation(Calculator::MULTIPLY);

        }
    }


    else if(mySender == ButtonSub){
        QString text = lineEdit->text();
        bool ok;
        double x = text.toDouble(&ok);
        if(ok) {
            calculatorEngine.store(x);
            lineEdit->setText("-");
            calculatorEngine.handleOperation(Calculator::SUBTRACT);
        }
    }

    //-----------------------//
    else if(mySender == buttonEquals){
        QString text = lineEdit->text();
        bool ok;
        double x = text.toDouble(&ok);
        if(ok) {
            calculatorEngine.store(x);

            double x = calculatorEngine.equalsPressed();
            QString result = QString::number(x);
            lineEdit->setText(result);
        }
    }




    else if(mySender == buttonClear){
        lineEdit->setText("");
        calculatorEngine.clear();
    }


}

CalculatorGui::~CalculatorGui(){
}
