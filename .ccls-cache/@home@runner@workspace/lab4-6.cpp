//Lab4-6.cpp - displays the area of a triangle
//Created/revised by <Darius Haywood> on <2/11/2025>
//#include <iomanip>
#include <iostream>
using namespace std;

int main(){
	//declare variables
	int base = 11;
	int height = 13;
	double area = 0.0;
	//enter input items
	cout << "Base: ";
	cin >> base;
	cout << "Height: ";
	cin >> height;

	//calculate and display area
	area = base * height / 2;
	//cout << fixed << setprecision(2);
	cout << "Area: " << area << endl;

	return 0;
}	//end of main function