#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
using namespace std;

class Calculator
{
private:
    float num1;
    float num2;

public:
    void inputNumbers();
    void add();
    void subtract();
    void multiply();
    void divide();
};


void Calculator::inputNumbers()
{
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;
}

void Calculator::add()
{
    cout << "Addition = " << num1 + num2 << endl;
}

void Calculator::subtract()
{
    cout << "Subtraction = " << num1 - num2 << endl;
}

void Calculator::multiply()
{
    cout << "Multiplication = " << num1 * num2 << endl;
}

void Calculator::divide()
{
    if(num2 != 0)
        cout << "Division = " << num1 / num2 << endl;
    else
        cout << "Cannot divide by zero!" << endl;
}
#endif
