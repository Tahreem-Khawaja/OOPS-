#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int width;

public:
    void setDimensions();
    int area();
    int perimeter();
};

// Function definitions outside the class

void Rectangle::setDimensions()
{
    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;
}

int Rectangle::area()
{
    return length * width;
}

int Rectangle::perimeter()
{
    return 2 * (length + width);
}

#endif
