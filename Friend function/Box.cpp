#include <iostream>
using namespace std;

class Box {
private:
    int length; // Private data member

public:
    // Constructor to initialize length
    Box(int l) {
        length = l;
    }

    // Declaring the friend function inside the class
    friend void displayLength(Box b);
};

// Defining the friend function (No 'friend' keyword or 'Box::' needed here)
void displayLength(Box b) {
    // Accessing private data member 'length' directly
    cout << "The length of the box is: " << b.length << endl;
}

int main() {
    // Creating an object of Box and initializing length to 15
    Box myBox(15);

    // Calling the friend function like a normal function
    displayLength(myBox);

    return 0;
}
