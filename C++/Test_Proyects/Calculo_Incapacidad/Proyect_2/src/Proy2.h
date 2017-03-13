/*
 * Proy2.h
 *
 *  Created on: Mar 10, 2017
 *      Author: Human Waste
 */

#ifndef PROY2_H_
#define PROY2_H_


#include <iostream>
#include <ctime>
using namespace std;

struct date {
	int day;
	int month;
	int year;

};

struct error{
		int yearError;
		int monthError;
		int yearMatch;
		int monthMatch;
		int maxDaysError;
		int daysMatch;
		int dayError;
		int yearBisiesto;
		int maxDaysMonth;
		int yearMonthMatch;



	};


date getDate();
int validateYear(int inputYear , int yearMinimum, int yearFuture);
int inputMatchtoValue(int input, int currMonth);
int validateMonth( int yearMatch, int inputMonth, int currMonth, int maxMonth);
int findBisiesto(int inputYear);
int findMaxDaysMonth(int inputMonth, int bisiesto );
int match2Items(int x, int y);
int findDayError(int yearMonthMatch, int inputDay, int currDay, int maxDaysMonth );
bool DateValidation (int dateError, int monthError, int yearError);



#endif /* PROY2_H_ */
