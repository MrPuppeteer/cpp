#include "std_lib_facilities.h"

int main() // example of bad code (a break is missing)
{
  constexpr double cm_per_inch = 2.54; // number of centimeters in
                                       // an inch
  double length = 1;                   // length in inches or
                                       // centimeter
  char unit = 'a';
  cout << "Please enter a length followed by a unit (c or i):\n";
  cin >> length >> unit;
  switch (unit)
  {
  case 'i':
    cout << length << "in == " << cm_per_inch * length << "cm\n";
  case 'c':
    cout << length << "cm == " << length / cm_per_inch << "in\n";
  }
}
