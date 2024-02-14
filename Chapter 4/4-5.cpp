/*
The CandyBar structure contains three members. The first member holds the brand name of a condy bar. 
The second member holds the weight (which may have a fractional part) of the candy bar, and the third
member holds the number of calories (an integer value) in the candy bar.
Write a program that declares such a structure and cfreates a CandyBar variable called snack, initializing
its members to "Mocha Munch", 2.3, and 350, respectively. The initialization should be part of the declaration
for snack. Finally, the program should display the contents of the snack variable.
*/

#include <iostream>
#include <string>

struct CandyBar {
	std::string brand;
	float weight;
	int calories;
};

int main(){
	CandyBar snack = {
		"Mocha Munch",
		2.3,
		350
	};
	
	std::cout << "Contents of snack: \n";
	std::cout << "\tBrand: " << snack.brand << std::endl;
	std::cout << "\tWeight: " << snack.weight << std::endl;
	std::cout << "\tCalories: " << snack.calories << std::endl;
	
	return 0;
}

