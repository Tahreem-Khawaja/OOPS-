#ifndef INFO_H
#define INFO_H
#include <iostream>
using namespace std;
class student{
	private:
	string name;
    int roll_no;
    float marks;
    public:
    	//function to get data from user
    void getData()
	{
    cout<<"Enter the name: "<<endl;
    cin>> name;
    cout<<"Enter the roll_no: "<<endl;
    cin>> roll_no;
    cout<<"Enter the marks: "<<endl;
    cin>>marks;
}
    void displaydata()
    {
    	cout<<"/n Student Information"<<endl;
    	cout<<"name: "<<name<<endl;
    	cout<<"roll_no: "<<roll_no<<endl;
    	cout<<"marks: "<<marks<<endl;
	}
};
#endif
