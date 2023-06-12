#ifndef BANK_H
#define BANK_H

#include <vector>
#include <iostream>
#include "User.h"

using namespace std;

class Bank {
  private:
    vector<User> users{};
    User m_currentUser{};
    int numUsers{};
  
  public:
    bool login(string username, string password);
    bool userExists(User user);
    void addUser(User user);
    int viewBalance();
    int withdraw(int amt);
    int deposit(int amt); 
    User currentUser();
};

#endif
