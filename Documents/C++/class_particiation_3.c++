#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<string> splitString(string line);
void sortRecord(vector<double> &studentScore);

int main()
{
  ifstream file("../PVAMU/COMP 1337 - PO2 (CS2 Theory)/student_record.txt");
  int counter = 0;
  string line;

  vector<double> studentScore;

  // Extract the data from the file
  while (getline(file, line))
  {
    if (stod(splitString(line)[1]) == 1)
    {
      cout << line;
    }

    studentScore.push_back(stod(splitString(line)[1]));
  }

  sortRecord(studentScore);
}

vector<string> splitString(string line)
{
  vector<string> splittedString;
  stringstream studentRecord(line);
  string split;
  while (getline(studentRecord, split, ','))
  {
    splittedString.push_back(split);
  }

  return splittedString;
}

void sortRecord(vector<double> &studentScore)
{
  // Step 1: Sort the array in ascending order
  for (int i = 0; i < studentScore.size(); i++)
  {
    int m = i;
    for (int j = i + 1; j < studentScore.size(); j++)
    {
      if (studentScore[j] < studentScore[m])
      {
        m = j;
      }
    }

    double temp = studentScore[i];
    studentScore[i] = studentScore[m];
    studentScore[m] = temp;
  }

  for (int i = 0; i < studentScore.size(); i++)
  {
    cout << studentScore[i] << endl;
  }
}
