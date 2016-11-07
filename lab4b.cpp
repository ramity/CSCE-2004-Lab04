
#include <iostream>
using namespace std;
int main()
{
   // Get number from user
   int input = 0;
   double accumulator = 0;
   cout << "How many numbers would you like to average together?:\n";
   cin >> input;

   // Compute and print the mean of the user input

   int number = 0;
   double x;
   while (number < input)
   {
      cout << "Please type a numerical #" << number + 1 << " value now: ";
      cin >> x;
      accumulator = accumulator + x;
      number = number + 1;
   }
   accumulator = accumulator / number;
   cout << "The mean of the user input values is: " << accumulator << endl;
   return 0;
}
