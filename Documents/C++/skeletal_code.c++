// #include <iostream>

// // Function declaration (prototype)
// void myFunction();

// int main() {
//     // Your code goes here

//     // Function call
//     myFunction();

//     // End of program
//     return 0;
// }

// // Function definition
// void myFunction() {
//     // Function body
//     std::cout << "Hello from myFunction!" << std::endl;
// }






#include <iostream>

using namespace std;

const float FREEZE_PT = 32.0; //Freezing point of water
const float BOIL_PT = 212.0; //Boiling point of water

int main() {
  float avgTemp; //Hold the result of averaging FREEZE_PT and BOIL_PT

  cout << " Water freezes at " << FREEZE_PT << endl;
  cout << "and boils at " <<  BOIL_PT << " degrees ." << endl;

  avgTemp = FREEZE_PT + BOIL_PT;
  avgTemp = avgTemp / 2.0;

  cout << "Halfway between is ";
  cout << avgTemp << " degrees." << endl;

  return 0;

}

