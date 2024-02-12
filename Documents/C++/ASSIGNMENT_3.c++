#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Global variable for the input file name
string fileName;

// Function to create a feature file with the name entered by the user
void createFeatureFile() {
    cout << "Enter the name of the feature file: ";
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
        cout << "Contents of " << filename << ":" << endl;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file." << endl;
    }
}

int main() {
    createFeatureFile();

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
    readFromFile(fileName);

    return 0;
}
