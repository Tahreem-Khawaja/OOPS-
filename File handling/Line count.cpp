#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    // Open file in read mode
    ifstream file("notes.txt");

    string line;
    int lineCount = 0;

    // Check if file opened successfully
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Count lines in the file
    while (getline(file, line)) {
        lineCount++;
    }

    // Close file
    file.close();

    // Display total number of lines
    cout << "Total number of lines in the file: "
         << lineCount << endl;

    return 0;
}
