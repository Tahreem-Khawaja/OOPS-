#include <iostream>
using namespace std;

class Device {
protected:
    string deviceName;
    int deviceID;
    int* data;

public:
    Device(string name, int id, int value) {

        deviceName = name;
        deviceID = id;

        data = new int;
        *data = value;

        cout << "Device Constructor Called" << endl;
    }

    virtual ~Device() {

        delete data;

        cout << "Device Destructor Called" << endl;
    }

    void displayDevice() {

        cout << "Device Name: "
             << deviceName << endl;

        cout << "Device ID: "
             << deviceID << endl;

        cout << "Data Value: "
             << *data << endl;
    }
};

class Sensor : public Device {
private:
    string sensorType;
    float* sensorValue;

public:
    Sensor(string name,
           int id,
           int value,
           string type,
           float sValue)
        : Device(name, id, value) {

        sensorType = type;

        sensorValue = new float;
        *sensorValue = sValue;

        cout << "Sensor Constructor Called" << endl;
    }

    ~Sensor() {

        delete sensorValue;

        cout << "Sensor Destructor Called" << endl;
    }

    void displaySensor() {

        displayDevice();

        cout << "Sensor Type: "
             << sensorType << endl;

        cout << "Sensor Value: "
             << *sensorValue << endl;
    }
};

int main() {

    Sensor* s1 = new Sensor(
        "Temperature Device",
        101,
        500,
        "Temperature",
        36.5
    );

    s1->displaySensor();

    delete s1;

    return 0;
}
