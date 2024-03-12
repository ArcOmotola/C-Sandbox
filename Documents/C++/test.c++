// // #include <iostream>

// // // Define an enum representing the days of the week
// // enum DayOfWeek
// // {
// //   Sunday = 5,
// //   Monday,
// //   Tuesday,
// //   Wednesday,
// //   Thursday,
// //   Friday,
// //   Saturday
// // };

// // int main()
// // {
// //   // Prompt the user to enter a day of the week as an integer
// //   int day;
// //   std::cout << "Enter a number (0-6) representing the day of the week: ";
// //   std::cin >> day;

// //   // Convert the integer input to a DayOfWeek enum value
// //   DayOfWeek dayEnum;
// //   switch (day)
// //   {
// //   case 0:
// //     dayEnum = Sunday;
// //     break;
// //   case 1:
// //     dayEnum = Monday;
// //     break;
// //   case 2:
// //     dayEnum = Tuesday;
// //     break;
// //   case 3:
// //     dayEnum = Wednesday;
// //     break;
// //   case 4:
// //     dayEnum = Thursday;
// //     break;
// //   case 5:
// //     dayEnum = Friday;
// //     break;
// //   case 6:
// //     dayEnum = Saturday;
// //     break;
// //   default:
// //     std::cout << "Invalid input. Please enter a number between 0 and 6." << std::endl;
// //     return 1; // Exit the program with an error status
// //   }

// //   // Print the day of the week based on the enum value
// //   switch (dayEnum)
// //   {
// //   case Sunday:
// //     std::cout << "Sunday" << std::endl;
// //     break;
// //   case Monday:
// //     std::cout << "Monday" << std::endl;
// //     break;
// //   case Tuesday:
// //     std::cout << "Tuesday" << std::endl;
// //     break;
// //   case Wednesday:
// //     std::cout << "Wednesday" << std::endl;
// //     break;
// //   case Thursday:
// //     std::cout << "Thursday" << std::endl;
// //     break;
// //   case Friday:
// //     std::cout << "Friday" << std::endl;
// //     break;
// //   case Saturday:
// //     std::cout << "Saturday" << std::endl;
// //     break;
// //   }

// //   return 0; // Exit the program successfully
// // }

// ////////////////////////////////////////////////////////////////

// // #include <iostream>
// // using namespace std;

// // enum Numbers
// // {
// //   ONE,
// //   TWO,
// //   THREE,
// //   FOUR,
// //   FIVE
// // };

// // int main()
// // {
// //   cout << ONE;
// //   cout << TWO;
// //   cout << THREE;
// //   cout << FOUR;
// //   cout << FIVE;
// //   return 0;
// // }

// // #include <iostream>

// // // Function to calculate the summation of all numbers in the array
// // int calculateSum(int arr[], int size)
// // {
// //   int sum = 0;
// //   for (int i = 0; i < size; ++i)
// //   {
// //     sum += arr[i];
// //   }
// //   return sum;
// // }

// // // Function to find the maximum element in the array
// // int findMax(int arr[], int size)
// // {
// //   int max = arr[0];
// //   for (int i = 1; i < size; ++i)
// //   {
// //     if (arr[i] > max)
// //     {
// //       max = arr[i];
// //     }
// //   }
// //   return max;
// // }

// // int main()
// // {
// //   const int size = 5;
// //   int arr[size];

// //   // Input array elements
// //   std::cout << "Enter " << size << " numbers:" << std::endl;
// //   for (int i = 0; i < size; ++i)
// //   {
// //     std::cout << "Enter number " << i + 1 << ": ";
// //     std::cin >> arr[i];
// //   }

// //   // Calculate sum of array elements
// //   int sum = calculateSum(arr, size);
// //   std::cout << "Sum of array elements: " << sum << std::endl;

// //   // Find maximum element in the array
// //   int max = findMax(arr, size);
// //   std::cout << "Maximum element in the array: " << max << std::endl;

// //   return 0;
// // }

// #include <iostream>

// void Obtain(int arr[], int size)
// {
//   // Function modifies the array values
//   for (int i = 0; i < size; ++i)
//   {
//     arr[i] = i * 2; // Modifying array values
//   }
// }

// void FindWarmest(const int arr[], int size, int &warmest)
// {
//   // Function does not modify the array values
//   warmest = arr[0];
//   for (int i = 1; i < size; ++i)
//   {
//     if (arr[i] > warmest)
//     {
//       warmest = arr[i];
//     }
//   }
// }

// void FindAverage(const int arr[], int size, int &average)
// {
//   // Function does not modify the array values
//   int sum = 0;
//   for (int i = 0; i < size; ++i)
//   {
//     sum += arr[i];
//   }
//   average = sum / size;
// }

// void Print(const int arr[], int size)
// {
//   // Function does not modify the array values
//   std::cout << "Array elements: ";
//   for (int i = 0; i < size; ++i)
//   {
//     std::cout << arr[i] << " ";
//   }
//   std::cout << std::endl;
// }

// int main()
// {
//   const int SIZE = 5;
//   int arr[SIZE] = {1, 2, 3, 4, 5};
//   int warmest, average;

//   Obtain(arr, SIZE);               // Array is modified
//   FindWarmest(arr, SIZE, warmest); // Array is not modified
//   FindAverage(arr, SIZE, average); // Array is not modified
//   Print(arr, SIZE);                // Array is not modified

//   return 0;
// }

#include <iostream>
using namespace std;

enum Numbers
{
  ONE,
  TWO,
  THREE,
  FOUR,
  FIVE
};

typedef Numbers number;

int main()
{
  number myNumber = FOUR;
  std::cout << myNumber;
  return 0;
}