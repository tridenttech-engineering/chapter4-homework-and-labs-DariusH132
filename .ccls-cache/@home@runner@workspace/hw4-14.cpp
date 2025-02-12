// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <Darius Haywood> on <2/11/2025>

#include <iostream>
using namespace std;

int main() {
  int small = 0;
  int medium = 0;
  int large = 0;
  int family = 0;
  int totalPizza = 0;
  
  double smallPercent = 0.0;
  double mediumPercent = 0.0;
  double largePercent = 0.0;
  double familyPercent = 0.0;

  cout << "Number of small pizzas sold: ";
  cin >> small;
  cout << "Number of medium pizzas sold: ";
  cin >> medium;
  cout << "Number of large pizzas sold: ";
  cin >> large;
  cout << "Number of family pizzas sold: ";
  cin >> family;
  totalPizza = small + medium + large + family;
  smallPercent = static_cast<double>(small) / totalPizza * 100;
  mediumPercent = static_cast<double>(medium) / totalPizza * 100;
  largePercent = static_cast<double>(large) / totalPizza * 100;
  familyPercent = static_cast<double>(family) / totalPizza * 100;
  cout << "Total pizzas sold: " << totalPizza << endl;
  cout << "Small pizzas sold: " << small << " (" << smallPercent << "%)" << endl;
  cout << "Medium pizzas sold: " << medium << " (" << mediumPercent << "%)" << endl;
  cout << "Large pizzas sold: " << large << " (" << largePercent << "%)" << endl;
  cout << "Family pizzas sold: " << family << " (" << familyPercent << "%)" << endl;

  return 0;
} // end of main function