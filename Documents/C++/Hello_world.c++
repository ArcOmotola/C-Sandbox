#include <iostream>
#include <string>
using namespace std;
int main() {
    // int myAge = 35;
    // std::cout << "I am " << myAge << " years old.";
    // std::cout << "Omotola Ogunsola" << std::endl;
    // return 0;

    // int x, y;
    // int sum;
    // std::cout << "Type a number: ";
    // std::cin >> x;
    // std::cout << "Type another number: ";
    // std::cin >> y;
    // sum = x + y;
    // std::cout << "Sum is: " << sum;


    // string cars[4] = {"Volvo", "car"};

    string food = "Pizza"; // A food variable of type string

    cout << food << "\n";   // Outputs the value of food (Pizza)
    cout << &food; // Outputs the memory address of food (0x6dfed4)
}


void myFunction();

int main() {
    myFunction();
    return 0;
}

void myFunction() {
    cout << "Omotola";
}


void anotherFunc(string fname, int age) {

}