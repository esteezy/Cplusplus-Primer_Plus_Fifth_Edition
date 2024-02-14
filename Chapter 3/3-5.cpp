/*5. Asks how many miles you have driven and how many gallons of gasoline youve used and then reports miles per gallon your car has gotten. 
*/
#include <iostream>
using namespace std;

int main(){
	
	cout << "Enter the number of miles driven: ";
	double milesDriven;
	cin >> milesDriven;
	cout << "Enter the gallons of gas used: ";
	double gallonsUsed;
	cin >> gallonsUsed;
	
	cout <<"Caluclated MPG: " << milesDriven/gallonsUsed << "mpg.\n";
	
	return 0;
}

