/*
 * Setter.h
 *
 *  Created on: Mar 13, 2017
 *      Author: Human Waste
 */

#ifndef SETTER_H_
#define SETTER_H_

#include <iostream>
#include <ctime>
using namespace std;

class Setter {
private:
	string name;
	time_t hoy;
	tm ltm;
	int currYear;
	int currMonth;
	int currDay;
	int future;


public:
	Setter();
	string toString();
	void setName(string newName);
	time_t setNow();
	//void setTime(tm today);
	tm* setTime(time_t &hoy);
	int getCurrYear(tm* date);
	int setCurrMonth(tm* date);
	int setCurrDay(tm* date);
	int setFuture(int);

};

#endif /* SETTER_H_ */
