// Programmer: Diego Hernandez
//
// Purpose: Calculate the number of slices a pizza
//          of a user specified diameter can be di-
//          vided into given a target size for each
//          slice of 14.125 square inches
//
// Start Part 1
//
//   Input: Prompt user to enter their specified diameter for the pizza
//          Wait for user to enter their specified diameter
//
//
//   Programming:
//          Radius = diameter/2
//          Area = PI*(radius)^2
//          pizzaSlices = Area / MIN_SIZE_FOR_SLICES
//          resultingSlices = Area / pizzaSlices;
//          targetSize = (resultingSlice / MIN_SIZE_FOR_SLICES) * 100
//
//
//   Output:
//          Display number of slices the pizza will be divided into based on its diameter,
//          the size of resulting slice in square inches, and size of resulting slice 
//          as a percentage to the target size of 14.125
//
// Stop Part 1

#include <iostream>
#include <cmath>   // pow();
#include <iomanip> // setprecision();
using namespace std;

int main()
{

     // Part 1
     const double MIN_SIZE_FOR_SLICES = 14.125;
     const double PI = 3.1415;
     int d;    // diameter
     double r, // radius
         a;    // area
     int pizzaSlices;
     double resultingSlice;
     double targetSize;

     cout << "Pizza Palace\n"
          << endl;
     cout << "Enter the diameter of the pizza: ";

     cin >> d;
     cout << endl;

     r = d / 2.0;
     a = PI * pow(r, 2);
     pizzaSlices = a / MIN_SIZE_FOR_SLICES;
     resultingSlice = a / (pizzaSlices);
     targetSize = (resultingSlice / MIN_SIZE_FOR_SLICES) * 100;

     cout << "A " << d << " inch pizza can be divided evenly into " << fixed << pizzaSlices << " slices." << endl;
     cout << "The slices will be " << setprecision(3) << resultingSlice
          << " square inches or approximately " << setprecision(1) << targetSize << "% of the target size\n" << endl;

     //
     // Part 2
     // Purpose: Calculate how many pizzas will be requiered to serve guests at an event based on 3 scemarios
     //
     // Start Part 2
     //
     //   Input: Prompt user to enter the number of attending guests they wish to serve
     //          Wait for user to enter the number of guests
     //
     //
     //   Programming:
     //       Scenario 1:
     //          estimatedSlices1 = peopleServed * 3;
     //          numberOfPizzas1 = ceil(estimatedSlices1 / pizzaSlices);
     //          extraSlices1 = (numberOfPizzas1 * pizzaSlices) - estimatedSlices1;
     //
     //       Scenario 2:
     //          estimatedSlices2 = (round((peopleServed * 0.66)) * 3) + (round((peopleServed * 0.33)) * 2);
     //          numberOfPizzas2 = ceil(estimatedSlices2 / pizzaSlices);
     //          extraSlices2 = (numberOfPizzas2 * pizzaSlices) - estimatedSlices2;
     //
     //       Scenario 3:
     //          estimatedSlices3 = (round((peopleServed * 0.66)) * 3) + (round((peopleServed * 0.33)) * 4);
     //          numberOfPizzas3 = ceil(estimatedSlices3 / pizzaSlices);
     //          extraSlices3 = (numberOfPizzas3 * pizzaSlices) - estimatedSlices3;
     //
     //   Output:
     //             Display scenario descriptions, estimated number of slices guests will eat, number of pizzas required,
     //             and number of extra left over slices all in tabular form
     //
     //
     // Stop Part 2

     int peopleServed;
     double estimatedSlices1, estimatedSlices2, estimatedSlices3;
     int numberOfPizzas1, numberOfPizzas2, numberOfPizzas3;
     int extraSlices1, extraSlices2, extraSlices3;

     cout << "How many people do you wish to serve? ";
     cin >> peopleServed;
     cout << endl;
     cout << "Guest Scenarios: \t" << right << setw(46) << " Estimated"
          << setw(22) << "Number of" << setw(24) << "Extra" << endl;
     cout << setw(68) << "Slices" << setw(26) << "Pizzas Needed" << setw(22) << "Slices" << endl;

     // Scenario 1
     estimatedSlices1 = peopleServed * 3;
     numberOfPizzas1 = ceil(estimatedSlices1 / pizzaSlices);
     extraSlices1 = (numberOfPizzas1 * pizzaSlices) - estimatedSlices1;

     // Scenario 2
     estimatedSlices2 = (round((peopleServed * 0.66)) * 3) + (round((peopleServed * 0.33)) * 2);
     numberOfPizzas2 = ceil(estimatedSlices2 / pizzaSlices);
     extraSlices2 = (numberOfPizzas2 * pizzaSlices) - estimatedSlices2;

     // Scenario 3
     estimatedSlices3 = (round((peopleServed * 0.66)) * 3) + (round((peopleServed * 0.33)) * 4);
     numberOfPizzas3 = ceil(estimatedSlices3 / pizzaSlices);
     extraSlices3 = (numberOfPizzas3 * pizzaSlices) - estimatedSlices3;

     cout << left
          << "All guests have 3 slices each " << right << setw(36) 
          << static_cast<int>(estimatedSlices1)
          << right << setw(22) << numberOfPizzas1
          << right << setw(26) << extraSlices1 << endl;
     cout << left
          << "2/3 of the guests have 3 slices, and the rest have 2 slices" 
          << right << setw(7) << static_cast<int>(estimatedSlices2)
          << right << setw(22) << numberOfPizzas2
          << right << setw(26) << extraSlices2 << endl;
     cout << left
          << "2/3 of the guests have 3 slices, and the rest have 4 slices" 
          << right << setw(7) << static_cast<int>(estimatedSlices3)
          << right << setw(22) << numberOfPizzas3
          << right << setw(26) << extraSlices3 << endl;


          
     return 0;
}
