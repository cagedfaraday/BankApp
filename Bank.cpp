#include <iostream>
#include "Bank.h"

using namespace std;

int Bank::viewBalance() {
  return currentUser.balance();  
}

int Bank::withdraw(int amt) {
  amt += 0;
  return 0;
}

int Bank::deposit(int amt) {
  amt += 0;
  return 0;
}
bool Bank::login(string username, string password) {
  bool loggedIn{false};
  for (int i{0}; i < numUsers; i++) {
    if (username == users[i].username()) {
      loggedIn = users[i].login(username, password);
    }
  }
  return loggedIn;
}

