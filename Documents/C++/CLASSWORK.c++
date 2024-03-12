#include <iostream>
#include <string>

using namespace std;

int main() { 
  int choice;
  int result = 0; 
  int calculatorOperation; // Moved calculatorOperation declaration outside the loop
  
  do {
    cout << "MENU\n"
            "\t1. Add\n"
            "\t2. Subtract\n"
            "\t3. Multiply\n"
            "\t4. Modulus\n"
            "Enter your choice:"; 

    cin >> calculatorOperation; 

    int n1, n2;
    cout << "Input two numbers:";
    cin >> n1 >> n2; 

    switch(calculatorOperation) {
      case 1:
        result = n1 + n2; 
        break;
      case 2:
        result = n1 - n2; 
        break;
      case 3:
        result = n1 * n2; 
        break;
      case 4:
        result = n1 % n2; 
        break;
      default:
        cout << "Invalid choice\n"; 
        continue; // Added to skip the rest of the loop and start from the beginning
    }

    cout << "Result: " << result << endl;

  } while (calculatorOperation >= 1 && calculatorOperation <= 4); // Corrected loop condition
  
  return 0;
}




