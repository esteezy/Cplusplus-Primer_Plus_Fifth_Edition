/*5. Write a program that has main() call a user defined function that takes a distance in light years as an argument and then returns the distance in astronomical units. 
	Enter the number of light years: 4.2
	4.2 light years = 265608 astonomical units
	1 lyr = 63240 astronomical units
*/
#include <iostream>

using namespace std;

void convertToAU(double lightYrs){
    const double conversionAU {63240.0};
    cout << lightYrs << " light years = " << (lightYrs * conversionAU)
        << " astronomical units.\n";
}

int main(){
	cout << "Enter the number of light years: ";
	double lightYrs {};
	cin >> lightYrs;
	convertToAU(lightYrs);
	return 0;
}

