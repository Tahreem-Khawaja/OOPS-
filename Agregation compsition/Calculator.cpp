#include <iostream>
using namespace std;

class Display {
private:
    double lastResult;

public:
    Display() : lastResult(0) {}

    void show(double value) {
        lastResult = value;
        cout << "Result: " << value << endl;
    }

    double getLastResult() const {
        return lastResult;
    }
};

class Calculator {
private:
    Display display;  // Calculator owns Display

public:
    double add(double a, double b) {
        double result = a + b;
        display.show(result);
        return result;
    }

    double multiply(double a, double b) {
        double result = a * b;
        display.show(result);
        return result;
    }

    double getLastResult() const {
        return display.getLastResult();
    }
};

int main() {
    Calculator calc;

    calc.add(5, 3);        // Output: Result: 8
    calc.multiply(4, 2);   // Output: Result: 8

    cout << "Last Result: " << calc.getLastResult() << endl;

    return 0;
}
