/*2. Write a short program that asks for your height in feet and inches and your weight in pounds. (Use 3 variable to store the information.) Have the program report your BMI. To calculate BMI, first convert your height in feet and inches to your height in inches. Then, convert your height in inches to your height in meters by multiplying by 0.0254. Then, convert your weight in pounds into your mass in kilograms by dividing by 2.2. Finally compute your BMI by dividing your mass in kgs by the square of your height in meters. Use symoblic constants to represent the various conversion factors.
*/

#include <iostream>
using namespace std;

int main(){
	const int inches_per_foot = 12;
	const double meters_per_inch = 0.0254;
	const double lbs_per_kg = 2.2;
	
	cout << "Enter your height in feet and inches, and your weight in lbs.\n";
	cout << "First, enter your height in feet: ";
	int height_feet;
	cin >> height_feet;
	cout << "Next, enter the remaining inches: ";
	int height_inches;
	cin >> height_inches;
	cout << "Finally, enter your weight in lbs: ";
	double weight_lbs;
	cin >> weight_lbs;

    double totalHeightMeters = (height_feet * inches_per_foot + height_inches) * meters_per_inch;
	
	double weight_kgs = weight_lbs / lbs_per_kg;
	
	cout << "Your calculated BMI for a height of " << height_feet <<" ft and "
	        << height_inches << " inches equals: " 
	            << (weight_kgs/(totalHeightMeters*totalHeightMeters)) << endl;
	
	return 0;
}
