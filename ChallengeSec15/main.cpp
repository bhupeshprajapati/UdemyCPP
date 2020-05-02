#include<iostream>
#include<vector>
#include "SavingsAccount.h"
#include "Account.h"
#include "AccountUtil.h"

using namespace std;
int main(){
	cout.precision(2);
	cout<<fixed;
	
	//Accounts
	vector<Account> accounts;
	accounts.push_back(Account{});
	accounts.push_back(Account {" Larry"});
	accounts.push_back(Account {" Moe",2000});
	accounts.push_back(Account {" curly",5000});
	
	display(accounts);
	deposit(accounts,1000);
	withdraw(accounts,2000);
	
	//Savings
	
	vector<SavingsAccount> sav_accounts;
	sav_accounts.push_back(SavingsAccount{});
	sav_accounts.push_back(SavingsAccount{" superman"});
	sav_accounts.push_back(SavingsAccount{" Batman",2000});
	sav_accounts.push_back(SavingsAccount{" Wonderwomen",5000,5.0});
	
	display(sav_accounts);
	deposit(sav_accounts,1000);
	withdraw(sav_accounts,2000);
	
	
	return 0;
}