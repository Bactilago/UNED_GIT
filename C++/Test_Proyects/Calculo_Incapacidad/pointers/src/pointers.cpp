//============================================================================
// Name        : pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int test = 10;
	cout << sizeof(test) << endl;
	int* ptrTest = &test;
	cout << sizeof(*ptrTest) << endl;

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
