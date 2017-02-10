#include<iostream>
using namespace std;

class bank
{
	char name[100];
	char acc_type[100];
	int acc_no;
	int balance;
	public:
		void getvalue();
		void deposite();
		void withdraw();
		void display();
	
};

void bank ::getvalue()
{
	cout<<"Enter name"<<endl;
	cin>>name;
	cout<<"Enter account no."<<endl;
	cin>>acc_no;
	cout<<"Enter account type"<<endl;
	cin>>acc_type;
}

void bank ::deposite()
{
	int amt;
	cout<<"Deposite an amount"<<endl;
	cin>>amt;
	balance=amt;
	
}

void bank ::withdraw()
{
	int amt1;
	
	cout<<"balance : "<<balance;
	cout<<"\nenter amount to withdraw "<<endl;
	cin>>amt1;
	
	balance=balance-amt1;
}
void bank::display()
{
	cout<<"name : "<<name;
	cout<<"\nbalance : "<<balance;
}

int main()
{
	bank b1;
	b1.getvalue();
	b1.deposite();
	b1.withdraw();
	b1.display();
	return 0;
}
