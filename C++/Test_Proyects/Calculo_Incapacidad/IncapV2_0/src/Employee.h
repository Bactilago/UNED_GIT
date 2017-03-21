/*
 * Employee.h
 *
 *  Created on: Mar 17, 2017
 *      Author: Human Waste
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <iostream>
using std::cout;
using std::cin;
using std::flush;
using std::endl;
using std::string;
#include <iomanip>
using std::ios;
using std::fixed;
#include "Dates.h"


class Employee {
private:
	string name;
	string lastName1;
	string lastName2;
	string fullName;
	double ultSalario;
	double penSalario;
	double antepenSalario;

public:
	Employee();
	void printHeader();
	string getName();
	double salarioPromedio();
	void printResults(double diffDias, double subsidio);
	int printExit();
};

#endif /* EMPLOYEE_H_ */
