#include <iostream>
using namespace std;

// Function prototype
int calculateFibonacci(int n);

int main() {
    int n;

    // Prompt user for input
    cout << "Enter a number: ";
    cin >> n;

    // Output the result of the Fibonacci calculation
    cout << calculateFibonacci(n);

    return 0;
}

// Function definition to calculate the nth Fibonacci number
int calculateFibonacci(int n) {
    int firstFibNumber = 0;
    int secondFibNumber = 1;
    int fib1 = firstFibNumber; // Comment: Initialize the first Fibonacci number
    int fib2 = secondFibNumber; // Comment: Initialize the second Fibonacci number
    int fib3;
    int fibonacci;

    // Check for invalid input
    if (n <= 0) {
        cout << "Invalid number" << endl;
        return -1;
    }

    // Handle base cases
    if (n == 1) {
        return firstFibNumber;
    }

    if (n == 2) {
        return secondFibNumber;
    }

    // Loop to calculate Fibonacci numbers
    for (int i = 2; i < n; i++) {
        fib3 = fib1 + fib2; // Calculate the next Fibonacci number
        fib1 = fib2; // Update fib1 to the current fib2
        fib2 = fib3; // Update fib2 to the current fib3
        fibonacci = fib3; // Store the current Fibonacci number
    }

    return fibonacci; //Return the nth Fibonacci number
}



