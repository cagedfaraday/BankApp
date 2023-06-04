#include <iostream>

using namespace std;

struct User {
  string username {};
  string password {};
};

User users[2];

bool login(string username, string password) {
  int numUsers{size(users)};

   for (int i{0}; i < numUsers; i++) {
    cout << users[i].username << " .. " << username << "\n";
    if ( ( users[i].username == username ) && ( users[i].password == password ) ) {
      return true;
    }    
   } 
   return false;
}


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

int testLogin() {
  int testsPassed{0};

  if (!login("", "")) {
    cout << "testLogin 1 passed\n";
    testsPassed++;
  }
  if(!login("user1", "PAssWOrd12#$")) {
    cout << "testLogin 2 passed \n";
    testsPassed++;
  }
  if (login("user1", "PAssWOrd#$12")) {
    cout << "testLogin 3 passed \n";
    testsPassed++;
  }
  return testsPassed;
}

int main () {
  User user1;
  user1.username = "user1";
  user1.password = "PAssWOrd#$12";
  
  User user2;
  user2.username = "user2";
  user2.password = "PAssWOrd12#$";
  
  users[0 ]= user1;
  users[1] = user2;

 // bool sessionExists {false};
  int testsPassed = testLogin();
  cout << "Tests Passed: " << testsPassed <<" \n";
  return 0;
}
