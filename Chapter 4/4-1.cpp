/*
Wite a C++ program that requests and displays information as shown in the following exmaple of output:
	What is your name? Betty Sue
	What is your last name? Yew
	What letter grade do you deserve? B
	What is your age? 22
	Name: Yew, Betty Sue
	Grade: C
	Age:22
*/

#include <iostream>

int main(){
	
	std::cout << "What is your first name? ";
	char first_name [20];
	std::cin.getline(first_name, 20);
	
	std::cout << "What is your last name? ";
	char last_name [20];
	std::cin.getline(last_name, 20);
	
	std::cout << "What letter grade do you deserve? ";
	char grade;
	std::cin >> grade;
	
	std::cout << "What is your age? ";
	signed int age;
	std::cin >> age;
	
	std::cout << "Name: " << last_name << ", " << first_name << std::endl;
	std::cout << "Grade: " << char(grade + 1) << std::endl;
	std::cout << "Age: " << age << std::endl;
	return 0;
}
