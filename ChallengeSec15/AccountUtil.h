#ifndef _ACCOUNT_UTIL_H
#define _ACCOUNT_UTIL_H
#include<vector>
#include "AccountUtil.h"
#include "SavingsAccount.h"

//Utility helper functions for Account class
void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts,double amount);
void withdraw(std::vector<Account> &accounts,double amount);

//Utility helper functions for Savings Account class

void display(const std::vector<SavingsAccount> &accounts);
void deposit(std::vector<SavingsAccount> &accounts,double amount);
void withdraw(std::vector<SavingsAccount> &accounts,double amount);

#endif // _ACCOUNT_UTIL_H
