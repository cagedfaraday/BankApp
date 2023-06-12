#include <iostream>
#include "BankTest.h"

int testUserExists(Bank bank, User user) {
  if (bank.userExists(user)) {
    cout << "User exists test success\n";
    return 1;
  }
  cout << "User exists test fail\n";
  return 0;
}

int testAddUser(Bank bank) {
  User user;
  user.username("newUser");
  user.password("newPassword123");
  bank.addUser(user); 
  if (bank.userExists(user)) {
    cout << "Add user success\n";
    return 1;
  }
  cout << "Add user fail\n";
  return 0;
}

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

int testLogin(Bank bank, string username, string password) {   
  bool login = bank.login(username, password) 
    && bank.currentUser().username() == username;
  
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
 
  User user;
  user.username(username);
  user.password(password);

  Bank bank{}; 
  testsPassed += testAddUser(bank);
  
  bank.addUser(user);
  
  testsPassed += testLogin(bank, username, password);
  testsPassed += testUserExists(bank, user);
  
  bank.login(username, password);
  
  testsPassed += testWithdraw(bank, 1000);
  testsPassed += testDeposit(bank, 1000);
  return testsPassed;
}
