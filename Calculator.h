/**
  *  @author Koll Klienstuber
  */
#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    friend class CalcGui;
    Calculator();


    enum opType
    {
        ADD ,
        SUBTRACT ,
        MULTIPLY ,
        DIVIDE,
        SQRT,
        NONE
    };

    void store(double value);
    double handleOperation(Calculator::opType newOperation);
    double equalsPressed();
    void clear();

private:
    double num1;
    double num2;

    double total;
    opType oper;
};
#endif // CALCULATOR_H
