//1. Write a C++ program that displays your name and address: 
 
#include <iostream> 
#include <string> 
using namespace std; 
 
int main() { 
	cout << "Enter your name: "; 
	string name  { }; 
	getline(cin >> ws, name); 
	cout << "Enter your address"; 
	string addr  { }; 
	getline(cin >> ws, addr); 
	cout << "Your name is " << name << " and you live at: " << addr << "  n"; 
	return 0; 
 } 
 