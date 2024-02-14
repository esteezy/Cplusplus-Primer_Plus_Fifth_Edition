/*6. Write a program that asks the user to enter an hour value and a minute value. The main() function should then pass these two values to a type void function that displays the two values in the format shown below:
	Enter the number of hours: 9
	Enter the number of minutes: 28
	Time: 9:28
 */
 #include <iostream>

using namespace std;

void printTime(int hour, int minutes){
    cout << "Time: " << hour << ":" << minutes;
}

int main(){
	cout << "Enter the number of hours: ";
	int hour {};
	cin >> hour;
	cout << "Enter the number of minutes: ";
	int minutes {};
	cin >> minutes;
	printTime(hour, minutes);
	return 0;
}