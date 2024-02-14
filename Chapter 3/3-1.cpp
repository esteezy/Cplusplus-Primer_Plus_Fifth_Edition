/*1. Write a short program that asks for your height in integer inches and then converts your height to feet and inches. Have the program use the underscore character to indicate where to type the response. Also, use a const symbolic constant to represent the conversion factor.
*/

#include <iostream>
using namespace std;

int main(){
	const int inches_per_foot = 12;
	
	cout << "Enter your height inches: _____\b\b\b\b\b";
	int height;
	cin >> height;
	
	cout << height << "in. = " << (height / conversionFactor) 
	        << "ft and " << (height % conversionFactor) << "in.\n";
	
	return 0;
}
