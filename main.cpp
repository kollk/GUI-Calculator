#include <iostream>
#include <QApplication>
#include "Calculator.h"
#include "CalculatorGui.h"
#include "catch.hpp"

using namespace std;

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    CalculatorGui test;
    test.show();

    return app.exec();
}


