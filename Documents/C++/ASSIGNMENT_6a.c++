#include <iostream>
using namespace std;

// Global array variable
int userArray[10];

// Function to create array with user input
void createArray()
{
  cout << "Enter 10 integers:" << endl;

  for (int i = 0; i < 10; ++i)
  {
    cout << "Enter value " << i + 1 << ": ";
    cin >> userArray[i];
  }
}

// Function to count the number of times the target item is found
int countElement(int item)
{
  int count = 0;
  for (int i = 0; i < 10; ++i)
  {
    if (userArray[i] == item)
    {
      count++;
    }
  }
  return count;
}

int main()
{
  // Step a: Create array
  // Step b: Get input from user and store in array
  createArray();

  // Step c: Ask user for target item
  int target;
  cout << "Enter an integer to search for: ";
  cin >> target;

  // Step d: Count the number of times target item is found
  int occurrence = countElement(target);

  // Output result
  cout << "The number " << target << " is found " << occurrence << " times in the array." << endl;

  return 0;
}
