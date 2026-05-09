#include <iostream>
using namespace std;

// Shared Calculator (resource)
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int multiply(int a, int b) {
        return a * b;
    }
};

// Student class (does NOT own calculator)
class Student {
private:
    Calculator* calculator; // reference to shared calculator
    string name;

public:
    // Constructor receives calculator (Dependency Injection)
    Student(string n, Calculator* calc) {
        name = n;
        calculator = calc;
    }

    void solveAddition(int a, int b) {
        int result = calculator->add(a, b);
        cout << name << " calculated " << a << " + " << b 
             << " = " << result << endl;
    }

    void solveMultiplication(int a, int b) {
        int result = calculator->multiply(a, b);
        cout << name << " calculated " << a << " * " << b 
             << " = " << result << endl;
    }
};

int main() {
    // Teacher creates ONE shared calculator
    Calculator sharedCalculator;

    // Students use the same calculator
    Student s1("Ali", &sharedCalculator);
    Student s2("Sara", &sharedCalculator);
    Student s3("Ahmed", &sharedCalculator);

    // Students perform operations
    s1.solveAddition(3, 5);
    s2.solveMultiplication(4, 6);
    s3.solveAddition(10, 2);

    return 0;
}
