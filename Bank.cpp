#include <iostream>
#include "Bank.h"

using namespace std;


int Bank::viewBalance() {
  return m_currentUser.balance();  
}

void Bank::addUser(User user) {
  users.push_back(user);
  numUsers++;
}

bool Bank::userExists(User user) {
  for (int i{0}; i < numUsers; i++) {
    if (users[i].username() == user.username()) {
      return true;
    }
  } 
  return false;
}

int Bank::withdraw(int amt) {
  return m_currentUser.balance(-1 * amt);
}

int Bank::deposit(int amt) {
  return m_currentUser.balance(amt);
}

User Bank::currentUser() {
  return m_currentUser;
}

bool Bank::login(string username, string password) {
  bool loggedIn{false};
  for (int i{0}; i < numUsers; i++) {
    if (username == users[i].username()) {
      loggedIn = users[i].login(username, password);
      m_currentUser = users[i];
      break;
    }
  }
  return loggedIn;
}

