/*
 * Cons.h
 *
 *  Created on: Mar 13, 2017
 *      Author: Human Waste
 */

#ifndef CONS_H_
#define CONS_H_
#include <iostream>
#include <ctime>
using namespace std;

class Cons {
private:
	string name;
public:
	Cons();
	string getName();
	string asignName(string);
};

#endif /* CONS_H_ */
