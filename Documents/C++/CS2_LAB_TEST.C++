
// #include <iostream> // iostream provides basic input and output service which allows the program perform input and output operations

// #include <cmath>   // For sqrt() and fabs()

// using namespace std;

// int studGrade(int grade) {
//   if (grade >= 90) {
//     cout << "A";
//   }
//   else if (grade >= 80) {
//     cout << "B";
//   } else if (grade >= 70) {
//     cout << "C";
//   } else if (grade >= 60) {
//     cout << "D";
//   } else {
//     cout << "F";
//   }
// }

// int main() {
//   studGrade(30);
//    return 0;
// }



// #include <iostream>
// using namespace std;

// int studGrade(int grade) {
//   if (grade >= 90) {
//     cout << "A";
//   }
//   else if (grade >= 80) {
//     cout << "B";
//   } else if (grade >= 70) {
//     cout << "C";
//   } else if (grade >= 60) {
//     cout << "D";
//   } else {
//     cout << "F";
//   }
// }

// int main() {
//   studGrade(80);
//   return 0;
// }


// #include <iostream>
// using namespace std;

// void studGrade(int grade) {
//   if (grade >= 90) {
//     cout << "A";
//   }
//   else if (grade >= 80) {
//     cout << "B";
//   } else if (grade >= 70) {
//     cout << "C";
//   } else if (grade >= 60) {
//     cout << "D";
//   } else {
//     cout << "F";
//   }
// }

// int main() {
//   int userGrade;
//   cout << "Enter the student's grade: ";
//   cin >> userGrade;

//   studGrade(userGrade);
//   return 0;
// }





#include <iostream> //iostream provides basic input and output service which allows the program perform input and output operations
#include <cmath> //Includes the cmath library, which provides mathematical functions
#include <iomanip> //Includes the iomanip library, which provides tools for manipulating input/output formatting
using namespace std;  //allows you to use cout and endl without explicitly specifying the namespace.

const float LOAN_AMOUNT = 50000.00; // Defines a constant float variable named LOAN_AMOUNT with a value of 50000.00
const float YEARLY_INTEREST = 0.0524; // Defines a constant float variable named YEARLY_INTEREST with a value of 0.0524
const int NUMBER_OF_YEARS = 7;  // Defines a constant int variable named NUMBER_OF_YEARS with a value of 7


int main() {
  //Local variables
  float monthlyInterest;
  int numberOfPayments;
  float payment;
  
  //Calculate values
  monthlyInterest = YEARLY_INTEREST / 12;   // Calculate the monthly interest rate
  numberOfPayments = NUMBER_OF_YEARS * 12;  // Calculate the total number of payments
  payment = (LOAN_AMOUNT * pow(1 + monthlyInterest, numberOfPayments) * monthlyInterest) / 
            (pow(1 + monthlyInterest, numberOfPayments) - 1); // Calculate the monthly payment an assigns the value to payment

  //Output results
  cout << fixed << setprecision(2) << "For a loan amount of " // Set the output format to fixed-point with 2 decimal places
       << LOAN_AMOUNT << " with an interest rate of " 
       << YEARLY_INTEREST << " and a " << NUMBER_OF_YEARS   // Output the loan amount, interest rate, and number of years
       << " year mortgage,  " << endl;
  cout << " your monthly payments are $" << payment << "." << endl; // Output the calculated monthly payment

  return 0; // Return 0 to indicate successful completion of the program
}
