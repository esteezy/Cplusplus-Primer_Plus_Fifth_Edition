/*3. Write a C++ program that uses three user-defined functions (main() as one) and produces the following output:
	Three blind mice
	Three blind mice
	See how they run
	See how they run
*/
#include <iostream>

using namespace std;

void blindMice(){
	cout << “Three blind mice\n”;
}

void seeRun(){
	cout << “See how they run\n”;
}

void printResult(){
	blindMice();
	blindMice();
	seeRun();
	seeRun();
}


int main(){
	printResult();
	return 0;
}

