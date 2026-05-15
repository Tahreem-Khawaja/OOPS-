#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    // Create and open file in write mode
    ofstream outFile("students.txt");

    // Writing student details
    outFile << "Name: Ali, Roll Number: 101" << endl;
    outFile << "Name: Ahmed, Roll Number: 102" << endl;
    outFile << "Name: Sara, Roll Number: 103" << endl;

    // Close write file
    outFile.close();

    // Open file in read mode
    ifstream inFile("students.txt");

    string line;

    cout << "Student Details:" << endl;

    // Read and display file contents
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    // Close read file
    inFile.close();

    return 0;
}
