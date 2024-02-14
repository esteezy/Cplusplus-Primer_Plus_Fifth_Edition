/*4. Write a program that has main() call a user-defined function that takes a Celsius temp value as an argument and then returns the equivalent Farenheit value. The program should request a C value as an input from the user and display the result, as shown:
	Please enter a Celsius value: 20
	20 degrees Celsius is 68 degrees Farenhiet.
	F = 1.8 * C + 32.0
*/
#include <iostream>

using namespace std;

void convertToFarenhiet(double x){
    double tempF {0};
    tempF = (1.8 * x) + 32.0;
    cout << x << " degrees Celsius is " << tempF << " degrees Farenhiet.\n";
}

int main(){
	cout << "Please enter a Celsius value: ";
	double tempC {0};
	cin >> tempC;
	convertToFarenhiet(tempC);
	return 0;
}

