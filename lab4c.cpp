#include <iostream>
using namespace std;
int main()
{
   // Declare and initialize variables
   double InputValue = 0;
   double TotalValue = 0;
   double CountValue = 0;

   double AverageValue = 0;

   // Read input value
   cout << "Enter input value (or -1 to stop):\n";
   cin >> InputValue;

   // While loop to total up the daily sales
   while (InputValue != -1)
   {
      // Update total and count (FIX)
      CountValue++;
      TotalValue = TotalValue + InputValue;
      // Read input value
      cout << "Enter input value (or -1 to stop):\n";
      cin >> InputValue;
   }

   if(CountValue)
   {
     // Calculate and print average value (FIX)
     AverageValue = TotalValue / CountValue;
   }

   cout << "Average: " << AverageValue << endl;
   return 0;
}

