#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    // Constructor to initialize feet and inches
    Distance(int f, int i) {
        feet = f;
        inches = i;
    }

    // Friend function declaration inside the class
    friend void addDistance(Distance d1, Distance d2);
};

// Friend function definition with proper addition logic
void addDistance(Distance d1, Distance d2) {
    int totalFeet = d1.feet + d2.feet;
    int totalInches = d1.inches + d2.inches;

    // Logic: Agar inches 12 ya us se zyada hon, to unhen feet myn convert karo
    if (totalInches >= 12) {
        totalFeet += totalInches / 12; // Extra feet add karo
        totalInches = totalInches % 12; // Baqi bache huay inches rakhlo
    }

    // Displaying the final result
    cout << "Total Distance: " << totalFeet << " Feet and " << totalInches << " Inches" << endl;
}

int main() {
    // Creating two distance objects using parameters
    Distance dist1(5, 8);  // 5 Feet, 8 Inches
    Distance dist2(4, 7);  // 4 Feet, 7 Inches

    // Passing objects as parameters to the friend function
    addDistance(dist1, dist2);

    return 0;
}
