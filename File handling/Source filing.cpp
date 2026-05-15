#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    // Open source file in read mode
    ifstream sourceFile("notes.txt");

    // Open destination file in write mode
    ofstream destinationFile("copy.txt");

    string line;

    // Check if source file opened successfully
    if (!sourceFile) {
        cout << "Error opening source file!" << endl;
        return 1;
    }

    // Copy contents from notes.txt to copy.txt
    while (getline(sourceFile, line)) {
        destinationFile << line << endl;
    }

    // Close files
    sourceFile.close();
    destinationFile.close();

    cout << "File content copied successfully." << endl;

    return 0;
}
