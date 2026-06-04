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
	int n;
	cout<<"Enter the number of students:";
	cin>>n;
	//array of students
	Student students[n];
	for(int i=0; i< n; i++)
	{
		cout<<"Enter the details for students"<< "i+1"<<endl;
		cout<<"firstName:";
		cin>>students[i].firstName;
		cout<<"lastNmae:";
		cin>>students[i].lastName;
		cout<<"rollNumber:";
		cin>>students[i].rollNumber;
		cout<<"marks:";
		cin>>students[i].marks;
	}
	void displayStudentInfo();
	for(int i=0; i<n; i++)
	{
		students[i].displayStudentInfo();
		return 0;
}
}
