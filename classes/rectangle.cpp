#include <iostream>
#include "header_rectangle.h"
using namespace std;

int main()
{
    Rectangle r;   // Create object

    r.setDimensions();   // Input dimensions

    cout << "Area of Rectangle: " << r.area() << endl;
    cout << "Perimeter of Rectangle: " << r.perimeter() << endl;

    return 0;
}
