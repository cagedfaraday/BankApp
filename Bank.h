#ifndef BANK_H
#define BANK_H

#include <iostream>
#include "User.h"

class Bank {
  User* users{new User[0]{}};
  User currentUser{};
  int numUsers{sizeof(users) / sizeof(int)};

  public:
    bool login(string username, string password);
    int viewBalance();
    int withdraw(int amt);
    int deposit(int amt);
};

#endif
