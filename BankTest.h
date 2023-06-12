#ifndef BANKTEST_H
#define BANKTEST_H

#include <iostream>
#include "Bank.h"

using namespace std;

int testViewBalance();
int testUserExists(Bank bank, User user);
int testAddUser(Bank bank);
int testDeposit(Bank bank, int amt);
int testWithdraw(Bank bank, int amt);
int testLogin(Bank bank, string username, string password);
int runBankTests();

#endif
