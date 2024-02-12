#include <iostream>

int Cube(int n) {
  return n*n*n;
};   //prototype
using namespace std;

void main() {
  int yourNumber;
  int myNumber;

  yourNumber = 14;
  myNumber = 9;

  cout << "My Number =" << myNumber; 
  cout << "Its Cube is" << Cube(myNumber) << endl;

  cout << "Your Number =" << yourNumber;
  cout << "Its Cube is" << Cube(yourNumber) << endl;


}



// 499