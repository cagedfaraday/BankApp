#ifndef USER_H
#define USER_H

#include <iostream>

using namespace std;

class User {
	string m_username {};
	string m_password {};
  int m_balance {};

	public:
		string username();
    void username(string username);
    void password(string password);
    bool login(string username, string password);
    int balance();
};

#endif
