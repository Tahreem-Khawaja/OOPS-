#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    // Step 1: Create and write into the file
    ofstream outFile("notes.txt");

    outFile << "This is the first line." << endl;
    outFile << "This is the second line." << endl;
    outFile << "This is the third line." << endl;

    outFile.close();

    // Step 2: Read and display file contents
    ifstream inFile("notes.txt");
    string line;

    cout << "Contents of notes.txt:" << endl;

    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    // Step 3: Append name and roll number
    ofstream appendFile("notes.txt", ios::app);

    appendFile << "Name: Your Name" << endl;
    appendFile << "Roll Number: 12345" << endl;

    appendFile.close();

    cout << "\nData appended successfully." << endl;

    return 0;
}
