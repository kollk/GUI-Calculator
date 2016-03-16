
#include "Calculator.h"
#include <cmath>
#include <stdexcept>

using namespace std;

Calculator::Calculator() {
    num1 = 0;
    num2 = 0;
    oper = NONE;
}

void Calculator::store(double value){

    if(num2 == 0)
        num2 = value;

    else{
        num1 = value;
    }
}

double Calculator::handleOperation(Calculator::opType newOperation){
    ///FIXME
    if(oper == NONE){
        oper = newOperation;
        return num2;
    }
    else{

        if(oper == ADD){
            num1 = num2 + num1;
            num2 = 0;
        }
        else if(oper == SUBTRACT){
            num1 = num2;
            num2 = 0;
        }
        else if(oper == MULTIPLY){
            num1 = num2 * num1;
            num2 = 0;
        }
        else if(oper == DIVIDE){
            num1 = num2;
            num2 = 0;
        }
        else if(oper == SQRT){
            num1 = num2;
            num2 = 0;

        }
    }
    return 0;
}


double Calculator::equalsPressed() {


    if(oper == ADD){
        return num2 + num1;

    }
    else if(oper == SUBTRACT){
        return num2 - num1;
    }

    else if(oper == MULTIPLY){
        return num2 * num1;
    }
    else if(oper == DIVIDE){
        return num2/num1;
    }
    else if(oper == SQRT){
        return sqrt(num1);
    }
    return 0;
}



void Calculator::clear() {
    num1 = 0;
    num2 = 0;
    oper = NONE;

}
