
/*
Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.
*/

#include<iostream>
using namespace std;

class Bank
{
	int Acc_num;
	float Balance;
	float depo_amt;
	float withdraw_amt;
	
	public:
			Bank()	
			{
				cout<<"\n\n Enter the Account num :";
				cin>>Acc_num;
				cout<<"\n\n Enter the Balance :";
				cin>>Balance;	
			}	
			void deposited_amount()
			{
				cout<<"\n\n Enter the Amount you want to deposit in your account :";
				cin>>depo_amt;
			}
			void check_balance()
			{
				cout<<"\n\n Your Account balance after deposited amount : "<<Balance+depo_amt;
				cout<<"\n\n Enter the amount you want to withdraw : ";
				cin>>withdraw_amt;
				
			}
			void printdata()
			{
				cout<<"\n\n Depositor balance :"<<(Balance+depo_amt)-withdraw_amt;
			}
};
main()
{
	Bank C1;
	cout<<"\n\n**************************************************************************************";
	C1.deposited_amount();
	cout<<"\n\n**************************************************************************************";
	C1.check_balance();
	cout<<"\n\n**************************************************************************************";
	C1.printdata();
	cout<<"\n\n**************************************************************************************";
}



