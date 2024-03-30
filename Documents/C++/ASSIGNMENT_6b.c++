#include <iostream>
using namespace std;

// Global array variable
char userArray[10];

// Function to create array with user input
void createArray()
{
  cout << "Enter 10 characters:" << endl;

  for (int i = 0; i < 10; ++i)
  {
    cout << "Enter character " << i + 1 << ": ";
    cin >> userArray[i];
  }
}

// Function to reverse the array and print it
void reverseArray()
{
  cout << "Reversed characters: ";
  for (int i = 9; i >= 0; --i)
  {
    cout << userArray[i];
  }
  cout << endl;
}

int main()
{
  // Step a: Create array
  // Step b: Get input from user and store in array
  createArray();

  // Step c: Reverse the array and print it
  reverseArray();

  return 0;
}
