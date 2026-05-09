#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle(string brand) {
        cout << "Vehicle Constructor Called: "
             << brand << endl;
    }
};

class Car : public Vehicle {
public:
    Car(string brand, string model)
        : Vehicle(brand) {

        cout << "Car Constructor Called: "
             << model << endl;
    }
};

class ElectricCar : public Car {
public:
    ElectricCar(string brand,
                string model,
                int battery)
        : Car(brand, model) {

        cout << "ElectricCar Constructor Called: "
             << battery << " kWh Battery" << endl;
    }
};

int main() {

    ElectricCar e1("Tesla",
                   "Model S",
                   100);

    return 0;
}
