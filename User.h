#include <iostream>

using namespace std;

class User {
	string m_username {};
	string m_password {};

	public:
		string username();
    void username(string username);
    void password(string password);
    bool login(string username, string password);
};
