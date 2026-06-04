#include<iostream>
using namespace std;
class Employee{
	private:
		int id;
		string name;
		float salary;
	public:
	 Employee()
		{
			id=0;
			name="Not assigned";
			salary=0.0;
		}
		void displaydetails()
		{
			cout<<"\nEmployee Information"<<endl;
			cout<<"Employee ID:"<< id <<endl;
			cout<<"Employee Name:"<< name <<endl;
			cout<<"Employee Salary:"<< salary <<endl;
		}
};
int main(){
	Employee a;
	a.displaydetails();
	return 0;
}
