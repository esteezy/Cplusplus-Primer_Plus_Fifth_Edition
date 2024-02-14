/*
The CandyBar structure contains three members, as described in Programming Exercise 5.
Write a program that create an array of three CandyBar structures, initializes them to values of
your choice, and then displays the contents of each structure
*/


#include <iostream>
#include <string>

struct CandyBar {
	std::string brand;
	float weight;
	int calories;
};

int main(){
	//CandyBar * collection = new CandyBar[3];
	CandyBar collection[3] ={
		{"KitKat", 2.4, 2200},
		{"CrunchBar", 20, 220},
		{"Twix", 1.2, 1999}
	};
	/*collection[0].brand = "KitKat";
	collection[0].weight = 2.4;
	collection[0].calories = 2200;
	*/
	std::cout << "Summary for: " << collection[0].brand << std::endl;
	std::cout << "\tWeight: " << collection[0].weight << std::endl;
	std::cout << "\tCalories: " << collection[0].calories << std::endl;
	/*
	collection[1].brand = "CrunchBar";
	collection[1].weight = 20;
	collection[1].calories = 220;
	*/
	std::cout << "Summary for: " << collection[1].brand << std::endl;
	std::cout << "\tWeight: " << collection[1].weight << std::endl;
	std::cout << "\tCalories: " << collection[1].calories << std::endl;
	/*
	collection[2].brand = "Twix";
	collection[2].weight = 1.2;
	collection[2].calories = 1999;
	*/
	std::cout << "Summary for: " << collection[2].brand << std::endl;
	std::cout << "\tWeight: " << collection[2].weight << std::endl;
	std::cout << "\tCalories: " << collection[2].calories << std::endl;
		
	return 0;
}

