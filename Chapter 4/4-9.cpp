/*
Do Programming Exercise 6, but, instead of declaring an array of three CandyBar structures,
use new to allocate the array dynamically.
*/

#include <iostream>
#include <string>

struct CandyBar {
	std::string brand;
	float weight;
	int calories;
};

int main(){
	CandyBar * collection = new CandyBar[3];
	
	collection[0].brand = "KitKat";
	collection[0].weight = 2.4;
	collection[0].calories = 2200;
	
	collection[1].brand = "Twix";
	collection[1].weight = 1.4;
	collection[1].calories = 234;
	
	collection[2].brand = "CrunchBar";
	collection[2].weight = 3.1;
	collection[2].calories = 1999;
	
	std::cout << "Summary for: " << collection[0].brand << std::endl;
	std::cout << "\tWeight: " << collection[0].weight << std::endl;
	std::cout << "\tCalories: " << collection[0].calories << std::endl;

	std::cout << "Summary for: " << collection[1].brand << std::endl;
	std::cout << "\tWeight: " << collection[1].weight << std::endl;
	std::cout << "\tCalories: " << collection[1].calories << std::endl;

	std::cout << "Summary for: " << collection[2].brand << std::endl;
	std::cout << "\tWeight: " << collection[2].weight << std::endl;
	std::cout << "\tCalories: " << collection[2].calories << std::endl;
		
	delete [] collection;

	return 0;
}

