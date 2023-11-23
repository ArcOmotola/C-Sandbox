/**
 * This is an example of C++ documentation
 * 
 * @author  FirstName LastName
 * @version 1.0
 */
#include <iostream>
using namespace std;

/**
 * This function greets the user twice
 * 
 * @param   specify parameters if any
 * @return  specify return value if any
 */
// void GreetTwice() {
//   cout << "Hello" << endl;
//   cout << "Hello" << endl;
// }

// int main() {
//   GreetTwice();
//   return 0;
// }


void PrintVector(vector<string>& vect) {
  for (string s : vect) {
    cout << s << endl;
  }
}

int main() {
  vector<string> names;
  names.push_back("Alan");
  PrintVector(names);
  return 0;
}

