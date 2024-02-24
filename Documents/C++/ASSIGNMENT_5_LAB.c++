#include <iostream>
#include <fstream>
#include <string>
#include <sstream> // For stringstream
#include <cctype> // For isdigit

using namespace std;

// Global variable for the input file name
string fileName;

// Function to create a feature file with the name entered by the user
void createFeatureFile() {
    cout << "Enter the name of the feature file (e.g., featureFile.txt):";
    cin >> fileName;
    ofstream file(fileName); // Create the file
    file.close();
}

// Function to save input to file
void saveToFile(const string& filename, const string& data) {
    ofstream file(filename, ios::app);
    if (file.is_open()) {
        file << data << endl;
        file.close();
    } else {
        cout << "Unable to open file." << endl;
    }
}

// Function to read and output contents of file
void readFromFile(const string& filename) {
    string line;
    ifstream file(filename);
    if (file.is_open()) {
        cout << "Training data in "  << "'" << filename << "'" << endl;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file." << endl;
    }
}

// Function to display menu
void displayMenu() {
    cout << endl;
    cout << "Menu:" << endl;
    cout << "1. Create a text file" << endl;
    cout << "2. Input features and label" << endl;
    cout << "3. Show features and label" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice (1 - 4): ";
}

// Function to check if input is valid
bool isValidInput(const string& inString) {
    stringstream ss(inString);
    string item;
    int count = 0;

    // Split the input string by commas and validate individual parts
    while (getline(ss, item, ',')) {
        // Validate the last element (label)
        if (count == 7) {
            for (char c : item) {
                if (!isalpha(c)) {
                    return false; // Label contains non-alphabetic characters
                }
            }
        } else {
            // Validate numeric features
            for (char c : item) {
                if (!isdigit(c) && c != '.') {
                    return false; // Feature contains non-numeric characters
                }
            }
        }
        count++;
    }

    // Check if there are exactly 8 elements (7 features and 1 label)
    return count == 8;
}

int main() {
    int choice;
    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                createFeatureFile();
                break;
            case 2: {
                if (fileName.empty()) {
                    cout << "No file available." << endl;
                    break;
                }
                cout << "Enter comma-separated training data. Press enter to get new data." << endl;
                cout << "Type 'exit' to exit." << endl;
                string line;
                while (true) {
                    cin.ignore(); // Ignore newline character left by previous input
                    getline(cin, line);
                    if (line == "exit") {
                        break;
                    }
                    if (isValidInput(line)) {
                        saveToFile(fileName, line);
                    } else {
                        cout << "Invalid input. Please enter comma-separated numeric features followed by an alphabetic label." << endl;
                    }
                }
                break;
            }
            case 3: {
                if (fileName.empty()) {
                    cout << "No file available." << endl;
                    break;
                }
                readFromFile(fileName);
                break;
            }
            case 4:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid option. Please choose a number between 1 and 4." << endl;
        }
    }

    return 0;
}
