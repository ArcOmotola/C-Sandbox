#include <iostream>
using namespace std;

// Function to calculate x^y
double power(double x, int y) {
    double result = 1.0;

    // If y is negative, invert x and make y positive
    if (y < 0) {
        x = 1 / x;
        y = -y;
    }

    // Multiply x by itself y times
    for (int i = 0; i < y; ++i) {
        result *= x;
    }

    return result;
}

int main() {
    double x;
    int y;

    // Input values of x and y
    cout << "Enter the value of x (base): ";
    cin >> x;
    cout << "Enter the value of y (exponent): ";
    cin >> y;

    // Calculate and output the result
    double result = power(x, y);
    cout << x << " raised to the power of " << y << " is: " << result << endl;

    return 0;
}
