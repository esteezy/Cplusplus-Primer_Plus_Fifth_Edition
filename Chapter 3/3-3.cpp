/*3. Asks user to enter latitude in degrees, minutes, and seconds and then displays the latitude in decimal format. There are 60 seconds of arc to a minute and 60 minutes of arc to a degree; represent these values with symbolic constants. You should use a separate variable for each input value.
	Enter a latitude in degrees, minutes, and seconds:
	First, enter the degrees: 37
	Next, enter the minutes of arc: 51
	Finally, enter the seconds of arc: 19
	37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/
#include <iostream>
using namespace std;

int main(){
	const double arc_sec_to_degree = 1/3600.0;
	const double arc_min_to_degree = 1/60.0;
	
	cout << "Enter a ltatitue in degrees, minutes, and seconds: \n";
	cout << "First, enter the degrees: ";
	int degrees;
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	int minutes;
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	int seconds;
	cin >> seconds;
	    
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = ";
	cout << degrees + minutes * arc_min_to_degree + seconds * arc_sec_to_degree << " degrees.\n";
	
	return 0;
}
