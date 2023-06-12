#ifndef USER_H
#define USER_H

#include <iostream>

using namespace std;

class User {
	private:
    string m_username {};
	  string m_password {};
    int m_balance {5000};

	public:
		string username();
    void username(string username);
    void password(string password);
    bool login(string username, string password);
    int balance(int amt);
    int balance();
    string toString();
};

#endif
