//2. Write a C++ program that asks for a distance in furlongs and converts it to yards (One furlong = 220 yds). 
 
#include <iostream> 
 
using namespace std; 
 
int main() { 
	cout <<  "Enter a distance in furlongs:  "; 
	double dist  {0}; 
	cin >> dist; 
	cout <<  dist <<  " furlongs equals:  " << (dist * 220) <<  " yds!  n "; 
	return 0; 
 } 