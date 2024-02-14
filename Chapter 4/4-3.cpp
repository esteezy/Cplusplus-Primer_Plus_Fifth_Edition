/*
Write a program that asks the user to enter his or her first name and then last name, and that then constructs, stores, and displays a third string,
consisting of the user's last name followed by a comma, a space, and first name. Use char arrays and functions from the cstring header file. A sample 
run would look like this:
	Enter your first name: Flip
	Enter your last name: Fleming
	Here's the information in a single string: Fleming, Flip
*/

#include <iostream>
#include <cstring>

int main(){
	std::cout << "Enter your first name: ";
	char first_name [20];
	std::cin.getline(first_name, 20);
	
	std::cout << "Enter your last name: ";
	char last_name [20];
	std::cin.getline(last_name, 20);
	
	char full_name [42];
	std::strcpy(full_name, std::strcat(std::strcat(last_name, ", "), first_name));
	std::cout << "Here's the information in a single string: " << full_name << std::endl;
	return 0;
}

