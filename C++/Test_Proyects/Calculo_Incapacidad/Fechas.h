/*
 * Fechas.h
 *
 *  Created on: Mar 14, 2017
 *      Author: Gorilla-Henry
 */

#ifndef FECHAS_H_
#define FECHAS_H_
#include <iostream>
#include <ctime>
#include "Salario.h"
using namespace std;


class Fechas {


private:
	string name;
	time_t hoy;
	tm ltm;
	int currYear;
	int currMonth;
	int currDay;
	int future;
	static const int maxmonth = 12;
	static const int minYear = 2000;
	static const int secsPerYear = 86400;
	int date[3];
	int userYear;
	bool invalidYear;


public:
	Fechas();
	string toString();
	void setName(string newName);
	time_t setNow();
	tm* setTime(time_t &hoy);
	int getCurrDate(tm* date);
	int getCurrYear(tm* date);
	int setCurrMonth(tm* date);
	int setCurrDay(tm* date);
	int setFuture(int);
	int ingresaAnho();
	void userDate();
	void validYear();
	int validateYear();
};



#endif /* FECHAS_H_ */
