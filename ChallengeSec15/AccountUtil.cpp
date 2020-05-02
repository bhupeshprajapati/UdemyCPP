#include "AccountUtil.h"
#include<iostream>

//Helper functions for Accounts
//Displays Account objects in a vecor of account objects
void display(const std::vector<Account> &accounts){
	std::cout<<"\n========= Accounts ================================================"<<std::endl;
	for(const auto &acc:accounts)
		std::cout<<acc<<std::endl;
}

//Deposits supplied amount to each Account objects in the vecotor
void deposit(std::vector<Account> &accounts,double amount){
	std::cout<<"\n======== Depositing to Accounts=========================================="<<std::endl;
	for(auto &acc:accounts){
		if(acc.deposit(amount))
			std::cout<<"Deposited "<<amount<<" to "<<acc<<std::endl;
		else
			std::cout<<"Failed Deposit of "<<amount<<" to " <<acc<<std::endl;
	}
}

//Withdrow amount from each Account object in the vector
void withdraw(std::vector<Account> &accounts,double amount){
	std::cout<<"\n==== Withdrawing from Accounts ================================================"<<std::endl;
	for(auto &acc:accounts){
		if(acc.withdraw(amount))
			std::cout<<"Withdtrew "<<amount<<" from "<<acc<<std::endl;
		else
			std::cout<<"Failed Withdrawl of "<<amount<<" from "<<acc<<std::endl;
	}
}


// Helper functions for Savings Accounts class

void display(const std::vector<SavingsAccount> &accounts){
	std::cout<<"\n===== Savings Accounts ================================================"<<std::endl;
	for(const auto &acc:accounts)
		std::cout<<acc<<std::endl;
}

//Deposits supplied amount to each Account objects in the vecotor
void deposit(std::vector<SavingsAccount> &accounts,double amount){
	std::cout<<"\n======== Depositing to Savings Accounts=========================================="<<std::endl;
	for(auto &acc:accounts){
		if(acc.deposit(amount))
			std::cout<<"Deposited "<<amount<<" to "<<acc<<std::endl;
		else
			std::cout<<"Failed Deposit of "<<amount<<" to " <<acc<<std::endl;
	}
}

//Withdrow amount from each Account object in the vector
void withdraw(std::vector<SavingsAccount> &accounts,double amount){
	std::cout<<"\n==== Withdrawing from Savings Accounts ================================================"<<std::endl;
	for(auto &acc:accounts){
		if(acc.withdraw(amount))
			std::cout<<"Withdrew "<<amount<<" from "<<acc<<std::endl;
		else
			std::cout<<"Failed Withdrawl of "<<amount<<" from "<<acc<<std::endl;
}
}




