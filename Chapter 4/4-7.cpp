/*
William Wingate runs a pizza-analysis service. For each pizza, he needs to record the following information:
	- The name of the pizza company, which can consist of more than one word
	- The diameter of the pizza
	- The weight of the pizza
Devise a structure that can hold this information and write and program that uses a structure variable of that type.
The program should ask the user to enter each of the preceding items of information, and then the program should
display that information. Use cin (or its methods) and cout.
*/

#include <iostream>
#include <string>
#include <iomanip>


struct Pizza {
	std::string company;
	float diameter;
	float weight;
};

int main(){
	using namespace std;
	
	Pizza pie_1;
	
	cout << "Enter the pizza compnay name: ";
	getline(cin, pie_1.company);
	
	cout << "Enter the diameter of the pizza: ";
	cin >> pie_1.diameter;
	
	cout << "Enter the weight of the pizza: ";
	cin >> pie_1.weight;
	
	cout << "Pizza information enetered: \n";
	cout << "\tCompany Name: " << pie_1.company << endl;
	cout << "\tPizza Diameter: " << setprecision(3) << pie_1.diameter << endl;
	cout << "\tPizza Weight: " << setprecision(3) << pie_1.weight << endl;
	
	return 0;
}

