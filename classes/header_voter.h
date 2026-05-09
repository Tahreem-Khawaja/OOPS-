#ifndef VOTER_H
#define VOTER_H
#include <iostream>
using namespace std;
class voter
{
	private:
		string name;
		int age;
	public:
		void getdata();
		bool isEligible();
};
//function defining outside
    void voter::getdata()
    {
    	cout<<"Enter the name: "<<endl;
    	cin>> name;
    	cout<<"Enter the age: "<<endl;
    	cin>> age;
	}
	bool voter::isEligible()
	{
		if(age>18)
		return true;
		else 
		return false;
	}
	#endif
