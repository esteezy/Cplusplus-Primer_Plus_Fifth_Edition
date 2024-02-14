/*
Do Programming Exercise 7, but use new to allocated a structure instead of declaring a structure variable.
Also, have the program request the pizza diameter before it requests the pizza company name.
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
	
	Pizza * pie_1 = new Pizza;
	
	cout << "Enter the pizza compnay name: ";
	getline(cin, pie_1->company);
	
	cout << "Enter the diameter of the pizza: ";
	cin >> pie_1->diameter;
	
	cout << "Enter the weight of the pizza: ";
	cin >> pie_1->weight;
	
	cout << "Pizza information enetered: \n";
	cout << "\tCompany Name: " << pie_1->company << endl;
	cout << "\tPizza Diameter: " << pie_1->diameter << endl;
	cout << "\tPizza Weight: " << pie_1->weight << endl;
	
	delete pie_1;
	
	return 0;
}

