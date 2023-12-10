#include <iostream>
#include <vector>
using namespace std;
    
class BigCat {
  public:
    string species;
    string common_name;
    vector<string> habitat;
    string genus = "panthera";
  
  BigCat(string sp, string cn, vector<string> h) {
    species = sp;
    common_name = cn;
    habitat = h;
  }
};

int main() {
  
  //add code below this line

  BigCat snow_leopard("uncia", "snow leopard", {"Himalaya mountains", "Siberian mountains"} );

  //add code above this line
  
  cout << "A " << snow_leopard.common_name; 
  cout << " is part of the " << snow_leopard.species << " species." << endl;
  cout << "Their genus class is " << snow_leopard.genus << "." << endl;
  cout << "Some of their habitats include: ";
  for (auto a : snow_leopard.habitat) {
    cout << a << ", ";
  }
  cout << "etc." << endl;
  
  return 0;
  
}








////////////////////////////////////////////////////////////////




// #include <iostream>
// using namespace std;

// //add class definitions below this line

// class Observation {
// public:
//     string date;
//     double temperature;
//     double elevation;
//     int penguins;
//     double precipitation;

//     Observation(string d, double temp, double elev, int peng) {
//       date = d;
//       temperature = temp;
//       elevation = elev;
//       penguins = peng;
//       precipitation = 0;
//     } ;
     
// };
  

  
// //add class definitions above this line

// int main() {

//   Observation o("October 26, 2019", -47, 329.4, 3);
//   cout << "Today is " << o.date << "." << endl;
//   cout << "Temperature: " << o.temperature << endl;
//   cout << "Elevation: " << o.elevation << endl;
//   cout << o.penguins << " penguins observed with " << o.precipitation << " precipitation." << endl;
  
//   return 0;
  
// }

