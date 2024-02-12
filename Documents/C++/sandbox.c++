// #include <iostream>
// using namespace std;

// int main() {
//     // Example of a for loop
//     // cout << "Example of a for loop:" << endl;
//     // for (int i = 1; i <= 5; ++i) {
//     //     cout << i << " ";
//     // }
//     // cout << endl;

//     float loCost;
// float hiCost;
// loCost = 12.342;
// hiCost = 12.348;
// loCost =
// float(int(loCost * 100.0 + 0.5)) / 100.0;
// hiCost =
// float(int(hiCost * 100.0 + 0.5)) / 100.0;

// cout << loCost << " :deb 1" << endl;



//     return 0;
// }

////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string line;
//     cout << "Enter a line of text: ";
//     getline(cin, line); // Read a line from standard input
//     cout << "You entered: " << line << endl;
//     return 0;
// }


////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    // Receive lines containing comma-separated inputs
    cout << "Enter lines of text containing comma-separated inputs (type 'done' to finish):\n";
    string input;
    stringstream ss;
    while (true) {
        getline(cin, input);
        if (input == "done") {
            break;
        }
        ss << input << endl;
    }

    // Save lines to a file named "test.txt"
    ofstream outFile("test.txt");
    if (outFile.is_open()) {
        outFile << ss.str();
        outFile.close();
        cout << "Lines saved to test.txt" << endl;
    } else {
        cerr << "Unable to open file for writing!" << endl;
        return 1;
    }

    // Read lines from the file and display them
    ifstream inFile("test.txt");
    if (inFile.is_open()) {
        cout << "Lines read from test.txt:" << endl;
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cerr << "Unable to open file for reading!" << endl;
        return 1;
    }

    return 0;
}




