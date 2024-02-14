/*4. Write a program asks user to enter the number of seconds as an integer value (use type long) and that then displays the equivalent time in days, hours, minutes, and seconds. Use symbolic constants to represent the number of hours in a day, num minutes in hour, and num seconds in a minute. 
	Enter the number of seconds: 31600000
	31600000 seconds = 365 days, 46 minutes, 40 seconds
*/
#include <iostream>
using namespace std;

int main(){
	const int seconds_per_day = 24*60*60;
	const int seconds_per_hour = 60*60;
	const int seconds_per_minute = 60;
	
	cout << "Enter the number of seconds: ";
	long int totalSeconds;
	cin >> totalSeconds;
	
	int days, hours, minutes, seconds;
	days = totalSeconds / seconds_per_day;
	hours = (totalSeconds % seconds_per_day) / seconds_per_hour;
	minutes = (totalSeconds % seconds_per_hour) / seconds_per_minute;
	seconds = (totalSeconds % seconds_per_minute);
	
	cout << totalSeconds << " seconds = " << days << " days, " << hours
	        << " hours, " << minutes << " minutes, " << seconds << " seconds.\n";
	
	
	
	return 0;
}

