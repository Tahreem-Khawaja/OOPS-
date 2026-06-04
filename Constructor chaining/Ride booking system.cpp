#include <iostream>
#include <string>

// Top Base Class
class Vehicle {
protected:
    std::string type;

public:
    Vehicle(std::string vehicleType) : type(vehicleType) {
        std::cout << "1. Vehicle constructor executed. Type: " << type << std::endl;
    }
};

// Intermediate Derived Class
class Car : public Vehicle {
protected:
    std::string brand;

public:
    // Chaining to Vehicle
    Car(std::string vehicleType, std::string carBrand) 
        : Vehicle(vehicleType), brand(carBrand) {
        std::cout << "2. Car constructor executed. Brand: " << brand << std::endl;
    }
};

// Most Derived Class
class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    // Chaining to Car
    ElectricCar(std::string vehicleType, std::string carBrand, int battery) 
        : Car(vehicleType, carBrand), batteryCapacity(battery) {
        std::cout << "3. ElectricCar constructor executed. Battery: " << batteryCapacity << " kWh" << std::endl;
    }
};

int main() {
    std::cout << "Creating ElectricCar object..." << std::endl;
    ElectricCar myTesla("Sedan", "Tesla", 85);
    
    return 0;
}
