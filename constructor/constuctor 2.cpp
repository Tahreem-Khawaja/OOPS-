#include<iostream>
using namespace std;
class BankAccount{
    private:
    	string accountNumber;
    	string accountHolder;
    	double balance;
    public:
    	BankAccount(string accNo, string acchold, double bal)
    	{
    	accountNumber= accNo;
    	accountHolder= acchold;
    	balance= bal;
		}
		void showaccountdetails(){
		    cout<<"\nAccount Information"<<endl;
			cout<<"Account Number:"<< accountNumber <<endl;
			cout<<"Account Holder:"<< accountHolder<<endl;
			cout<<"Account Balance:"<< balance<<endl;
		}
};
int main(){
	BankAccount acc1("PK0309800780100", "Muhammad Awais",  10000);
	acc1.showaccountdetails();
	return 0;
}
