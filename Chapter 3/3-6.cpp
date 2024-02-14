/*6. Asks user to enter an automobile gasoline consumption figure in the european style (liters per 100 kilometers and converts it to to US miles per gallon. US approach is distance / fuel, wher European is fuel / distance. 100 km is 62.14 miles, and 1 gallon is 3.875 liters. 19mpg is ~12.4 1/100km and 27 mpg is 8.7 1/100km
*/

#include <iostream>
using namespace std;

int main(){
	const double km_per_mi = 100/62.14;
	const double gal_per_ltr = 1/3.875;
	
	cout << "Enter your automobile consumption (EU style): ";
	double ltrs_per_km;
	cin >> ltrs_per_km;
	
	double mpg = 1/(ltrs_per_km / 100 * gal_per_ltr * km_per_mi);
	
	cout << "You've used " << ltrs_per_km << " ltrs per 100 km. Converted to US measurements, "
	        << "this equates to: " << mpg << " mpg.";
	
	return 0;
}
