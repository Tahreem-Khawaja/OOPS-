#include <iostream>
#include <string>

// Base Class
class Product {
protected:
    std::string name;
    double price;

public:
    // Base constructor
    Product(std::string prodName, double prodPrice) : name(prodName), price(prodPrice) {
        std::cout << "Product base constructor called." << std::endl;
    }
};

// Derived Class
class Electronics : public Product {
private:
    int warrantyYears;

public:
    // Constructor chaining: Initializing base class via member initializer list
    Electronics(std::string prodName, double prodPrice, int warranty) 
        : Product(prodName, prodPrice), warrantyYears(warranty) {
        std::cout << "Electronics derived constructor called." << std::endl;
    }

    void displayDetails() const {
        std::cout << "\n--- Product Details ---" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Price: $" << price << std::endl;
        std::cout << "Warranty: " << warrantyYears << " years" << std::endl;
        std::cout << "-----------------------" << std::endl;
    }
};

int main() {
    // Creating derived object passes data up the chain
    Electronics laptop("Gaming Laptop", 1299.99, 2);
    laptop.displayDetails();

    return 0;
}
