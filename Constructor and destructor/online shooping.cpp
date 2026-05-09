#include <iostream>
using namespace std;

class Product {
protected:
    string name;
    double price;

public:
    Product(string n, double p) {
        name = n;
        price = p;

        cout << "Product Constructor Called" << endl;
    }

    void display() {
        cout << "Product Name: " << name << endl;
        cout << "Price: $" << price << endl;
    }
};

class Electronics : public Product {
private:
    int warrantyYears;

public:
    Electronics(string n, double p, int w)
        : Product(n, p) {

        warrantyYears = w;

        cout << "Electronics Constructor Called" << endl;
    }

    void displayElectronics() {
        display();

        cout << "Warranty Years: "
             << warrantyYears << endl;
    }
};

int main() {

    Electronics e1("Laptop", 1200.5, 2);

    e1.displayElectronics();

    return 0;
}
