#ifndef BANKTEST_H
#define BANKTEST_H

#include <iostream>
#include "Bank.h"

using namespace std;

int testViewBalance();
int testDeposit(Bank bank, int amt);
int testWithdraw(Bank bank, int amt);
int testLogin(string username, string password);
int runBankTests();

#endif
