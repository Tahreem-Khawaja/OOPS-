#include <iostream>
#include <string>

// Base Class
class File {
public:
    File() {
        std::cout << "Base: File opened" << std::endl;
    }
    
    // Virtual destructor is best practice for base classes
    virtual ~File() {
        std::cout << "Base: File closed" << std::endl;
    }
};

// Derived Class
class TextFile : public File {
private:
    std::string encoding;

public:
    TextFile(std::string enc) : encoding(enc) {
        std::cout << "Derived: TextFile initialized with " << encoding << " encoding." << std::endl;
    }

    ~TextFile() override {
        std::cout << "Derived: TextFile specific resources cleared." << std::endl;
    }
};

int main() {
    std::cout << "--- Creating Object ---" << std::endl;
    {
        // Object created within a local scope block to force destruction
        TextFile myFile("UTF-8");
        std::cout << "--- Object is active ---" << std::endl;
    } 
    // Object goes out of scope here; destructor triggers automatically
    
    std::cout << "--- Object Destroyed ---" << std::endl;
    return 0;
}
