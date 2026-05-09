
// main.cpp
#include "header_calculator.h"

int main()
{
    Calculator c;
    int choice;

    c.inputNumbers();

    cout << "\nChoose Operation\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1: c.add(); break;
        case 2: c.subtract(); break;
        case 3: c.multiply(); break;
        case 4: c.divide(); break;
        default: cout << "Invalid choice";
    }

    return 0;
}
