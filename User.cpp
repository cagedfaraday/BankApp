#include "User.h"
#include <iostream>

using namespace std;

string User::username() {
  return m_username;
}

int User::balance() {
  return m_balance;
}

void User::username(string username) {
  m_username = username;
}

void User::password(string password) {
  m_password = password;
}

bool User::login(string username, string password) { 
  if (m_username == username && m_password == password) return true;
  else return false;
}
