#include <iostream>
#include "BankTest.h"

int testDeposit(Bank bank, int amt) {
  int oldBalance = bank.viewBalance();
  int newBalance = bank.deposit(amt);
  if (oldBalance + amt == newBalance) {
    cout << "Deposit success\n";
    return 1;
  }
  cout << "Deposit fail\n";
  return 0;
}

int testWithdraw(Bank bank, int amt) {
  int oldBalance = bank.viewBalance();
  int newBalance = bank.withdraw(amt);
  if (oldBalance - amt == newBalance) {
    cout << "Withdraw success\n";
    return 1;
  }
  cout << "Withdraw fail\n";
  return 0;
}

int testLogin(string username, string password) {   
  Bank bank{};
  bank.login(username, password);
  bool login = bank.login(username, password);
  if (login) {
    cout << "Bank login successful\n";
    return 1;
  }
  cout << "Bank login unsuccessful\n";
  return 0;
}

int runBankTests() {
  int testsPassed{};

  string username = "user";
  string password = "PAssWOrd!@#$";
  
  testsPassed += testLogin(username, password);
  
  Bank bank{}; 
  bank.login(username, password);

  testsPassed += testWithdraw(bank, 1000);
  testsPassed += testDeposit(bank, 1000);
  return testsPassed;
}
