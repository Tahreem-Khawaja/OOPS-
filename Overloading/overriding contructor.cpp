#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    // Virtual function
    virtual double calculateSalary() {
        cout << "Base Employee salary calculation called." << endl;
        return 0;
    }

    // Virtual destructor
    virtual ~Employee() {}
};

// Derived class for Permanent Employee
class PermanentEmployee : public Employee {
private:
    double basicSalary;
    double bonus;

public:
    // Constructor
    PermanentEmployee(double bs, double b) {
        basicSalary = bs;
        bonus = b;
    }

    // Override calculateSalary()
    double calculateSalary() override {
        return basicSalary + bonus;
    }
};

// Derived class for Contract Employee
class ContractEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    // Constructor
    ContractEmployee(double hr, int hw) {
        hourlyRate = hr;
        hoursWorked = hw;
    }

    // Override calculateSalary()
    double calculateSalary() override {
        return hourlyRate * hoursWorked;
    }
};

int main() {
    // Creating objects
    PermanentEmployee pEmp(40000, 5000);
    ContractEmployee cEmp(800, 30);

    // Base class pointer
    Employee* emp;

    // Permanent Employee salary
    emp = &pEmp;
    cout << "Permanent Employee Salary: "
         << emp->calculateSalary() << endl;

    // Contract Employee salary
    emp = &cEmp;
    cout << "Contract Employee Salary: "
         << emp->calculateSalary() << endl;

    return 0;
}
