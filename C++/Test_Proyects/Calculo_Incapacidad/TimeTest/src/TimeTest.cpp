//============================================================================
// Name        : TimeTest.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	time_t hoy = time(0);
	tm *ltm = localtime(&hoy);
	//cout << *ltm << endl;
	return 0;
}
