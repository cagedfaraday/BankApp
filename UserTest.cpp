#include <iostream>
#include "User.h"

using namespace std;


int testLogin() {
  int testsPassed{};

  User user1;
  user1.username("user1");
  user1.password("PAssWOrd#$12");

  User user2;
  user2.username("user2");
  user2.password("PAssWOrd12#$");

  
  cout << "############TEST#############\n";
  //Passes test if login fails
  cout << "user1 -- login: user1, password: PassWOrd#$12\n";
  if (!user1.login("", "")) {
    cout << "login: , password: \n";
    cout << "testLogin 1 passed\n";
    testsPassed++;
  }

  //Passes test if login fails
  if(!user1.login("user1", "PAssWOrd12#$")) {
    cout << "login: user1, password: PAssWOrd12#$\n";
    cout << "testLogin 2 passed \n";
    testsPassed++;
  }
  //Passes test if login suceeds
  if (user1.login("user1", "PAssWOrd#$12")) {
    cout << "login: user1, password: PassWOrd#$12\n";
    cout << "testLogin 3 passed \n";
    testsPassed++;
  }

  cout << "############TEST#############\n";
  cout << "user2 -- login: user2 , password:PAssWOrd12#$\n";
  if (!user2.login("", "")) {
    cout << "login: , password: \n";
    cout << "testLogin 1 passed\n";
    testsPassed++;
  }
  if(user2.login("user2", "PAssWOrd12#$")) {
    cout << "login: user2, password: PAssWOrd12#$\n";
    cout << "testLogin 2 passed \n";
    testsPassed++;
  }
  if (!user2.login("user2", "PAssWOrd#$12")) {
    cout << "login: user2, password: PAssWOrd#$12\n";
    cout << "testLogin 3 passed \n";
    testsPassed++;
  }

  cout << "#############################\n";
  return testsPassed;
}

int runUserTests() {
  int numPassed{};

  numPassed += testLogin();
  return numPassed;
}
