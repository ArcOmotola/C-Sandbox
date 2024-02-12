#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const string filename = "features.txt";

// Function to save input to file
void saveToFile(string line) {
    ofstream file(filename, ios::app);
    if (file.is_open()) {
        file << line << endl;
        file.close();
    } else {
        cout << "Unable to open file." << endl;
    }
}

// Function to read and output contents of file
void readFromFile() {
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
    cout << "Enter lines containing comma-separated features and a label." << endl;
    cout << "Type 'exit' to terminate." << endl;

    string line;
    while (true) {
        getline(cin, line);
        if (line == "exit") {
            break;
        }
        saveToFile(line);
    }
    readFromFile();

    return 0;
}
