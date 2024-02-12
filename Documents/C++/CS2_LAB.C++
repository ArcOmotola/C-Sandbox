// #include <iostream> // iostream provides basic input and output service which allows the program perform input and output operations

// using namespace std;  // allows you to use cout and endl without explicitly specifying the namespace.

// const float FREEZE_PT = 32.0; // decalres a constant variable representing the freezing point of water 
// const float BOIL_PT = 212.0; // decalres a constant variable representing the boiling point of water 

// int main() {   // this defines the main function, which is the starting point for program execution
//   float avgTemp; //declares a variable which stores the result of averaging FREEZE_PT and BOIL_PT

//   cout << "Water freezes at " << FREEZE_PT << endl; // Outputs a message indicating the freezing point of water that was stored in variable FREEZE_PT .
//   cout << " and boils at " <<  BOIL_PT << " degrees." << endl; // Outputs a message indicating the boiling point of water that was stored in variable BOIL_PT .

//   avgTemp = FREEZE_PT + BOIL_PT; // Calculates the sum of FREEZE_PT and BOIL_PT and assigns it to variable avgTemp which will be later divided by 2 to update the average temperature value
//   avgTemp = avgTemp / 2.0; // assigns the value of the average temperature to avgTemp and updates the value of avgTemp on this ;ine

//   cout << "Halfway between is "; //Outputs a message indicating the halfway point
//   cout << avgTemp << " degrees." << endl; //Outputs the calculated average temperature

//   return 0; //Indicates successful program execution and terminates the program
// }


////////////////////////////////////////////////////////////////

// #include <iostream> // iostream provides basic input and output service which allows the program perform input and output operations

// using namespace std;  // allows you to use cout and endl without explicitly specifying the namespace.

// int main () { // the defines the main function, which is the starting point for program execution
//   const double CIRCUMFERENCE = 10.0; // decalres a constant variable representing the circumference of a circle
//   double radius; //declares a variable which stores the radius of the circle
//   radius = CIRCUMFERENCE / 2 * 3.14159265; // divides the value of CIRCUMFERENCE by the product of 2 * 3.14159265 and assigns the value to radius
//   cout << "The radius is " << radius; //Outputs a message indicating the radius of the circle
//   return 0; //Indicates successful program execution and terminates the program
// }

//////////////////////////////////////////////////////////////// 3

// #include <iostream> // iostream provides basic input and output service which allows the program perform input and output operations
// using namespace std;  // allows you to use cout and endl without explicitly specifying the namespace.

// int Square( int n ) {
//   return n*n;
// }

// int Cube( int n ) {
//   return n*n*n;
// }

// int main () { // the defines the main function, which is the starting point for program execution
//   cout << "The square of 27 is " << Square(27) << endl;
//   cout << "and the cube of 27 is "<< Cube(27) << endl;
//   return 0;
// }




//////////////////////////////////////////////////////////////// 4

#include <iostream> // iostream provides basic input and output service which allows the program perform input and output operations

#include <cmath>   // For sqrt() and fabs()

using namespace std;
int main() {
  float alpha;
  float beta;
  alpha = sqrt(7.3 + fabs(-100.0));
  cout << "alpha " << alpha << endl;
  beta = pow(alpha, 2);
  cout << "alpha squared "<< beta << endl;
}

//////////////////////////////////////////////////////////////// 5

// #include <iostream> 
// #include <iomanip>

// using namespace std;
// int main() {
//   const int num1 = 1066;
//   const int num2 = 1492;
//   cout << setw(3) << num1 << setw(5) << num2 << endl;
//   cout << num1 << num2;
//   cout << setw(4) << num1 << setw(6) << num2 << num1 << endl;
//   return 0;
// }

//////////////////////////////////////////////////////////////// 6


// #include <iostream> 
// #include <iomanip>

// using namespace std;
// int main() {
//   double num = 1000;
//   cout << setw(3) << 1776 << ' ' << 44 << endl;
//   cout << setw(4) << showpoint << num << ' ' << 44.55 << endl;
//   cout << setprecision(5) << 1776.12 << ' ' << num << endl;
//   cout << num;
//   return 0;
// }


//////////////////////////////////////////////////////////////// 7

// #include <iostream> 
// #include <iomanip>

// using namespace 
// std;

// const float WIDTH = 30.0;
//     const float LENGTH = 40.0;
// const float STORIES = 2.5;
// const float NON_LIVING_SPACE = 825.0;

// const float PRICE = 150000.0; 

// int main() { float grossFootage;
//     float livingFootage;
// float costPerFoot;
//   cout << fixed << showpoint;

// grossFootage = LENGTH * WIDTH * STORIES; livingFootage =
// grossFootage - NON_LIVING_SPACE; costPerFoot = PRICE /
// livingFootage; cout << "Cost per square foot is "
// << setw(6) << setprecision(2) << costPerFoot << endl;
// return 0; }


//////////////////////////////////////////////////////////////// 8


// #include <iostream> 
// #include <iomanip>

// using namespace std;

// const float WIDTH = 30.0;
// const float LENGTH = 40.0;
// const float STORIES = 2.5;
// const float NON_LIVING_SPACE = 825.0;

// const float PRICE = 150000.0; 

// int main() {
//   float grossFootage;
//   float livingFootage;
//   float costPerFoot;
//   cout << fixed << showpoint;

//   grossFootage = LENGTH * WIDTH * STORIES; 
//   livingFootage = grossFootage - NON_LIVING_SPACE; 
//   costPerFoot = PRICE / livingFootage;
//   cout << "Cost per square foot is " << setw(6) << setprecision(2) << costPerFoot << endl;
//   return 0;
// }


//////////////////////////////////////////////////////////////// 9

// #include <iostream> 
// #include <string>
// #include <cctype> 

// using namespace std;
// int main() {
//   string firstName = "mary";
//   string lastName = "melrose";
//   char ch;
//   ch = toupper(lastName.at(0));
//   lastName = ch + lastName.substr(1, lastName.length());
//   ch = toupper(firstName.at(0));
//   firstName = ch + firstName.substr(1, firstName.length());
//   cout << firstName << " '" << lastName << endl;
//   return 0;
// }


//////////////////////////////////////////////////////////////// 10

// #include <iostream> 
// #include <cmath>
// #include <iomanip>
// using namespace std;

// const float LOAN_AMOUNT = 50000.00;
// const float YEARLY_INTEREST = 0.0524;
// const int NUMBER_OF_YEARS = 7;

// int main() {
//   //Local variables
//   float monthlyInterest;
//   int numberOfPayments;
//   float payment;
  
//   //Calculate values
//   monthlyInterest = YEARLY_INTEREST / 12;
//   numberOfPayments = NUMBER_OF_YEARS * 12;
//   payment = (LOAN_AMOUNT * pow(1 + monthlyInterest, numberOfPayments) * monthlyInterest) / 
//             (pow(1 + monthlyInterest, numberOfPayments) - 1);

//   //Output results
//   cout << fixed << setprecision(2) << "For a loan amount of "
//        << LOAN_AMOUNT << " with an interest rate of "
//        << YEARLY_INTEREST << " and a " << NUMBER_OF_YEARS
//        << " year mortgage,  " << endl;
//   cout << " your monthly payments are $" << payment << "." << endl;

//   return 0;
// }




