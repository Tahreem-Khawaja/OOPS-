#include <iostream>
#include <string>

// Base Class
class Device {
protected:
    std::string deviceName;
    int deviceID;
    int* logData; // Dynamically allocated array/data

public:
    Device(std::string name, int id) : deviceName(name), deviceID(id) {
        logData = new int[5]{10, 20, 30, 40, 50}; // Allocating memory on the heap
        std::cout << "Device [" << deviceName << "] constructor: Allocated logData memory." << std::endl;
    }

    // Virtual destructor to ensure derived cleanup happens when deleting via base pointer
    virtual ~Device() {
        delete[] logData; // Freeing memory
        std::cout << "Device [" << deviceName << "] destructor: Freed logData memory." << std::endl;
    }
};

// Derived Class
class Sensor : public Device {
private:
    std::string sensorType;
    double* sensorValue; // Dynamically allocated double value

public:
    Sensor(std::string name, int id, std::string type, double initialVal) 
        : Device(name, id), sensorType(type) {
        sensorValue = new double(initialVal); // Allocating memory on the heap
        std::cout << "Sensor (" << sensorType << ") constructor: Allocated sensorValue memory." << std::endl;
    }

    ~Sensor() override {
        delete sensorValue; // Freeing memory
        std::cout << "Sensor (" << sensorType << ") destructor: Freed sensorValue memory." << std::endl;
    }

    void displayStatus() const {
        std::cout << "Sensor: " << sensorType << " | Value: " << *sensorValue << std::endl;
    }
};

int main() {
    std::cout << "--- Allocating object on the Heap ---" << std::endl;
    // Testing using new as requested
    Device* dynamicDevice = new Sensor("Mainframe Unit", 4004, "Temperature", 24.5);
    
    std::cout << "\n--- Testing System Output ---" << std::endl;
    // Downcasting safely just to invoke the derived method display
    static_cast<Sensor*>(dynamicDevice)->displayStatus();
    std::cout << std::endl;

    std::cout << "--- Freeing object from the Heap ---" << std::endl;
    // Testing using delete as requested
    delete dynamicDevice; 

    return 0;
}
