#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

// Function prototypes
string *splitString(string line);                                              // Function to split a string into parts
string findMax(string studentNames[], double studentScore[], int numStudents); // Function to find the maximum score
string findMin(string studentNames[], double studentScore[], int numStudents); // Function to find the minimum score
double findMean(double studentScore[], int numStudents);                       // Function to find the mean score

int main()
{
  // Open the file containing student records
  ifstream file("../PVAMU/COMP 1337 - PO2 (CS2 Theory)/student_record.txt");
  // Check if the file is successfully opened
  if (!file.is_open())
  {
    cout << "Error opening file" << endl;
    return 1;
  }

  // Initialize vectors to store student names and scores
  vector<string> studentNames;
  vector<double> studentScores;

  // Read each line from the file and extract student names and scores
  string line;
  while (getline(file, line))
  {
    string *parts = splitString(line);
    studentNames.push_back(parts[0]);
    studentScores.push_back(stod(parts[1])); // Convert string score to double
  }

  // Close the file
  file.close();

  // Get the number of students
  int numStudents = studentNames.size();

  // Output the number of students
  cout << "Number of students: " << numStudents << endl;
  // Output the maximum score
  cout << findMax(&studentNames[0], &studentScores[0], numStudents) << endl;
  // Output the minimum score
  cout << findMin(&studentNames[0], &studentScores[0], numStudents) << endl;
  // Output the mean score
  cout << "Mean Score: " << findMean(&studentScores[0], numStudents) << endl;

  return 0;
}

// Function to split a string into parts
string *splitString(string line)
{
  static string splittedString[2]; // Array to store the split parts
  stringstream studentRecord(line);
  string split;
  int counter = 0;
  while (getline(studentRecord, split, ','))
  {
    splittedString[counter] = split;
    counter++;
  }
  return splittedString;
}

// Function to find the maximum score
string findMax(string studentNames[], double studentScore[], int numStudents)
{
  double maximum = studentScore[0];
  int indexForMaximumScore = 0;
  for (int i = 1; i < numStudents; i++)
  {
    if (studentScore[i] > maximum)
    {
      maximum = studentScore[i];
      indexForMaximumScore = i;
    }
  }
  return "Maximum Score: " + to_string(maximum) + ", Student Name: " + studentNames[indexForMaximumScore];
}

// Function to find the minimum score
string findMin(string studentNames[], double studentScore[], int numStudents)
{
  double minimum = studentScore[0];
  int indexForMinimumScore = 0;
  for (int i = 1; i < numStudents; i++)
  {
    if (studentScore[i] < minimum)
    {
      minimum = studentScore[i];
      indexForMinimumScore = i;
    }
  }
  return "Minimum Score: " + to_string(minimum) + ", Student Name: " + studentNames[indexForMinimumScore];
}

// Function to find the mean score
double findMean(double studentScore[], int numStudents)
{
  double sum = 0;
  for (int i = 0; i < numStudents; i++)
  {
    sum += studentScore[i];
  }
  return sum / numStudents;
}
