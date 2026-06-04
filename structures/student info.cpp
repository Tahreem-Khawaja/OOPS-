#include<iostream>
using namespace std;
struct student
{
	string first_name;
	string last_name;
	int roll_no;
	int marks;
};
int main()
{
	void dispalyStudentInfo();
	{
	cout<<"first_name:"<<" "<<"last_name:"<<endl;
	cout<<"roll_no:"<<endl;
	cout<<"marks:"<<endl;
	}
	//creating structure variable
	student S1;
	S1.first_name = "Muhammad";
	S1.last_name  = "Ahmad";
	S1.roll_no    = 18;
	S1.marks      = 250;
	//calling the member function
	void displayStudentInfo();
	return 0;
}
