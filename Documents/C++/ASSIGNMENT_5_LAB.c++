#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

// Global variable for the input file name
string filename;

// Function prototypes
void saveToFile(ofstream &outputFile, const string &data);
void readFromFile();
void createFeatureFile();
bool isValidInput(string input);

void saveToFile(ofstream &outputFile, const string &data)
{
    if (outputFile.is_open())
    {
        outputFile << data << endl;
    }
    else
    {
        cout << "Error: File is not open for writing." << endl;
    }
}

void readFromFile()
{
    cout << "input a file name to read data" << endl;
    cin >> filename;
    cout << "read from file: " << filename << endl;
    ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
    {
        cout << "No file available." << endl;
        return;
    }

    string line;
    cout << "Training data in '" << filename << "':" << endl;
    while (getline(inputFile, line))
    {
        cout << line << endl;
    }

    inputFile.close();
}

void createFeatureFile()
{
    cout << "Enter the name of the feature file (e.g., featureFile.txt): ";
    cin >> filename;
    ofstream outputFile(filename.c_str());
    if (!outputFile.is_open())
    {
        cout << "Error: Unable to create file." << endl;
    }
    else
    {
        cout << "File created successfully." << endl;
        outputFile.close();
    }
}

bool isValidInput(string input)
{
    bool validInput = true;
    string splitted;

    // Get total length
    stringstream inStringLabel(input);
    int totalLength = 0;
    while (getline(inStringLabel, splitted, ','))
    {
        totalLength++;
    }

    // Check whether the label is valid
    stringstream labelStream(input.substr(input.rfind(',') + 1)); // Extract label part
    getline(labelStream, splitted, ',');
    for (int i = 0; i < splitted.length(); i++)
    {
        if (!isalpha(splitted[i]))
        { // Check if all characters are alphabetic
            validInput = false;
            break;
        }
    }

    // Check whether the features are valid
    stringstream inStringFeat(input);
    int counter = 0;
    while (getline(inStringFeat, splitted, ','))
    {
        counter++;
        if (counter == totalLength)
            break; // Do not proceed further if the label is not valid
        for (int i = 0; i < splitted.length(); i++)
        {
            if (splitted[i] != '.' && !isdigit(splitted[i]))
            {
                validInput = false;
                break;
            }
        }
    }

    return validInput;
}

int main()
{
    int choice;
    bool fileCreated = false;
    string userInput;
    ofstream outputFile;

    do
    {
        cout << "Menu:\n"
             << "1. Create a text file\n"
             << "2. Input features and label\n"
             << "3. Show features and label\n"
             << "4. Exit\n"
             << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            createFeatureFile();
            fileCreated = true;
            break;
        case 2:
            if (!fileCreated)
            {
                cout << "Error: No file available. Please create a text file first." << endl;
                break;
            }

            outputFile.open(filename.c_str(), ios::app);
            if (!outputFile.is_open())
            {
                cout << "Error: Unable to open file for writing." << endl;
                break;
            }

            cout << "Enter comma-separated training data. Press enter to get new data.\n"
                 << "Type 'exit' to exit.\n";

            cin.ignore(); // Clear buffer
            getline(cin, userInput);

            while (userInput != "exit")
            {
                if (isValidInput(userInput))
                {
                    saveToFile(outputFile, userInput);
                }
                else
                {
                    cout << "Invalid entry, please enter numeric features and labels only." << endl;
                }
                getline(cin, userInput);
            }

            outputFile.close();
            break;
        case 3:
            readFromFile();

            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid option. Please choose a number between 1 and 4." << endl;
            break;
        }

        cout << endl; // Print newline after each menu iteration
    } while (choice != 4);

    return 0;
}
