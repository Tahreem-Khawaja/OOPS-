#include <iostream>
using namespace std;

class Locker {
public:
    // Constructor
    Locker() {
        cout << "Locker allocated to customer." << endl;
    }

    // Destructor
    ~Locker() {
        cout << "Locker returned by customer." << endl;
    }
};

int main() {

    // ?? Stack Object inside block
    {
        Locker l1;   // Constructor called
    } // Destructor automatically called here

    cout << "------------------------" << endl;

    // ?? Heap Object using new
    Locker* l2 = new Locker();  // Constructor called

    delete l2;  // Destructor called manually

    return 0;
}
