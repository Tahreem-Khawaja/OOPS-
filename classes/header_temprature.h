#ifndef TEMPRATURE_H
#define TEMPRATURE_H

#include <iostream>
using namespace std;
class Temperature
{
public:
    float celsius;

    float convert()
    {
        return (celsius * 9/5) + 32;
    }

    void display()
    {
        cout << "Temperature in Fahrenheit: " << convert() << endl;
    }
};
#endif
