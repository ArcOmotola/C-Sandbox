#include <iostream>
#include <string>
using namespace std;

// Function to count the number of uppercase letters in a line of input
void CountUpper(const string& line, int& upCount) {
    upCount = 0; // Initialize the count to 0

    // Iterate through each character in the input line using a traditional for loop
    for (int i = 0; i < line.length(); i++) {
        char ch = line[i];

        // Check if the character is uppercase
        if (isupper(ch)) {
            // Increment the count if the character is uppercase
            upCount++;
        }
    }
}

int main() {
    string inputLine;
    int upperCount;

    // Input a line of text
    cout << "Enter a line of text: ";
    getline(cin, inputLine);

    // Call the CountUpper function to count uppercase letters
    CountUpper(inputLine, upperCount);

    // Output the count of uppercase letters
    cout << "Number of uppercase letters: " << upperCount << endl;

    return 0;
}




#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5; // Size of the array
    int numbers[SIZE]; // Array to store numbers
    int sum = 0; // Variable to store the sum of numbers

    // Input 5 numbers into the array
    std::cout << "Enter 5 numbers:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Number " << (i + 1) << ": ";
        std::cin >> numbers[i];
        sum += numbers[i]; // Add the number to the sum
    }

    // Calculate the average
    double average = static_cast<double>(sum) / SIZE;

    // Output the sum and average
    std::cout << "Sum of numbers: " << sum << std::endl;
    std::cout << "Average of numbers: " << average << std::endl;

    return 0;
}




