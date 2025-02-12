//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <Darius Haywood> on <2/11/2025>

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
  double height = 0.0;
  double radius = 0.0;
  double volume = 0.0;
  const double PI = 3.14159;

  cout << "Height: ";
  cin >> height;
  cout << "Radius: ";
  cin >> radius;
  
  volume = PI * radius * radius * height;
  cout << "volume: " << volume << endl;
  return 0;
  
} 
/*end of main function
cin >> height;
cout << "Height: ";
cout << "Radius: ";
cout << "Volume: " << volume << endl;
double height   = 0.0;
double radius   = 0.0;
double volume   = 0.0;
int main()
return 0;
using namespace std;
volume = PI * radius * radius * height;
*/