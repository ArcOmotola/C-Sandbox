// #include <iostream> // fix 1

// using namespace std;

// int main() { // fix 2
//   int N;
//   cout << "Enter N where N > 0 ";
//   cin >> N;

//   if (N <= 0) { // fix 3
//     cout << "only N > 0 is acceptable" << endl;

//   } else {
//     long n_factorial = 1; // fix 4

//     int i = 1;
//     while (i <= N) { // fix 5
//       n_factorial *= i;
//       i++;
//     }

//     cout << "Factorial of " << N << " is: " << n_factorial << endl; // fix 6
//   }
  
//   return 0;
// }


#include <iostream>

void increment(int x) {
    x++;  // Changes to x do not affect the original argument
}

int main() {
    int num = 5;
    increment(num);  // Pass by value
    // num remains 5
    return 0;
}











