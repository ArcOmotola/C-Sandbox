#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

// Function prototypes
string *splitString(string line);                             // Function to split a string into parts
string findMax(string studentNames[], double studentScore[]); // Function to find the maximum score
string findMin(string studentNames[], double studentScore[]); // Function to find the minimum score
double findMean(double studentScore[]);                       // Function to find the mean score

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

  // Initialize arrays to store student names and scores
  string studentName[100];
  double studentScore[100];

  // Extract the data from the file
  int counter = 0;
  string line;
  while (getline(file, line))
  {
    studentName[counter] = splitString(line)[0];
    studentScore[counter] = stod(splitString(line)[1]);
    counter++;
  }

  // Close the file
  file.close();

  // Output the maximum score
  cout << findMax(studentName, studentScore) << endl;
  // Output the minimum score
  cout << findMin(studentName, studentScore) << endl;
  // Output the mean score
  cout << "Mean Score: " << findMean(studentScore) << endl;

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
string findMax(string studentNames[], double studentScore[])
{
  double maximum = studentScore[0];
  int indexForMaximumScore = 0;
  for (int i = 0; i < 100; i++)
  {
    if (studentScore[i] > maximum)
    {
      maximum = studentScore[i];
      indexForMaximumScore = i;
    }
  }
  return "name: " + studentNames[indexForMaximumScore] + " score: " +
         to_string(studentScore[indexForMaximumScore]);
}

// Function to find the minimum score
string findMin(string studentNames[], double studentScore[])
{
  double minimum = studentScore[0];
  int indexForMinimumScore = 0;
  for (int i = 0; i < 100; i++)
  {
    if (studentScore[i] < minimum)
    {
      minimum = studentScore[i];
      indexForMinimumScore = i;
    }
  }
  return "name: " + studentNames[indexForMinimumScore] + " score: " +
         to_string(studentScore[indexForMinimumScore]);
}

// Function to find the mean score
double findMean(double studentScore[])
{
  double sum = 0;
  for (int i = 0; i < 100; i++)
  {
    sum += studentScore[i];
  }
  return sum / 100;
}
