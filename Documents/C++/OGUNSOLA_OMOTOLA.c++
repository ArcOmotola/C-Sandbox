#include <iostream>
#include <fstream>
#include <string>

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
    
                    getline(cin, line);
                    if (line == "exit") {
                        break;
                    }
                    saveToFile(fileName, line);
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
