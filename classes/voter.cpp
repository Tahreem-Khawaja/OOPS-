#include<iostream>
#include"header_voter.h"
using namespace std;
int main()
{
    voter v;   // Create object

    v.getdata();   // Input data

    if (v.isEligible())
        cout << "You are eligible to vote." << endl;
    else
        cout << "You are not eligible to vote." << endl;

    return 0;
}
