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
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Marks: " << marks << endl;
        cout << "rollNumber:"<<rollNumber<<endl;
    }
};

int main()
{
    // Creating structure variable
    Student s1;

    // Assigning values
    s1.firstName = "Rahul";
    s1.lastName = "Sharma";
    s1.rollNumber = 101;
    s1.marks = 88.5;

    // Calling member function
    s1.displayStudentInfo();

    return 0;
}
