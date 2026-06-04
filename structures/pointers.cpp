
#include <iostream>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo()
    {
        cout << "\nFull Name: " << firstName << " " << lastName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    // Creating pointer to structure
    Student *ptr;

    // Dynamically allocating memory
    ptr = new Student;

    // Taking input using pointer
    cout << "Enter First Name: ";
    cin >> ptr->firstName;

    cout << "Enter Last Name: ";
    cin >> ptr->lastName;

    cout << "Enter Roll Number: ";
    cin >> ptr->rollNumber;

    cout << "Enter Marks: ";
    cin >> ptr->marks;

    // Calling member function using pointer
    ptr->displayStudentInfo();

    // Free allocated memory
    delete ptr;

    return 0;
}
