#include "User.h"
#include "UserTest.h"
#include "Bank.h"
#include "BankTest.h"
#include <iostream>

using namespace std;

/*void handleLogin() {
  bool sessionExists {false};

  while (!sessionExists) {
    cout << "Welcome to Thing Banking \n";
    cout << "Please enter username: \n";

    cin >> username;

    cout << "Please enter password: \n";

    cin >> password;
    
  }  
}*/

int main () {
  // bool sessionExists {false};
  int testsPassed{};


  cout << "###############BANK TESTS################\n";
  testsPassed += runBankTests();
  cout << "#########################################\n";
  cout << "###############USER TESTS################\n";
  testsPassed += runUserTests();
  cout << "##########################################\n";
  cout << "Tests Passed: " << testsPassed <<" \n";
  return 0;
}
