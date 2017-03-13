/*
 * Validation.h
 *
 *  Created on: Mar 11, 2017
 *      Author: Human Waste
 */

#ifndef VALIDATION_H_
#define VALIDATION_H_

#include <iostream>
#include <ctime>
using namespace std;




class Validation {
private:

public:
	Validation();


	string getName();
	double salarioPromedio();
	bool userSelection();
	int ingresaAnho();
	int validateYear(int userYear, int future, int minYear);
	int findBisiesto(int inputYear);
	int ingresaMes();
	int validateMes(int inputYear, int currYear, int inputMonth, int currMonth, int maxMonth);
	int findMaxDaysMonth(int inputMonth, int bisiesto);
	int inputDay();
	int validateDiasUsuario(int inputDay, int maxDaysMonth, int inputYear, int currYear, int inputMonth, int CurrMonth , int currDay);
	tm capturaFecha(int year, int month, int day);
	void printResults(double diffDias, double subsidio, string name);




};




#endif /* VALIDATION_H_ */


