/*
 * validations.cpp
 *
 *  Created on: Mar 10, 2017
 *      Author: Human Waste
 */

#include <iostream>
#include "Proy2.h"
using namespace std;


date getDate(){
	date askDate;
	cout << "Ingrese el dia (DD): " << flush;
	cin >> askDate.day;
	cout << "Ingrese el mes (MM): " << flush;
	cin >> askDate.month;
	cout << "Ingrese el año (YYYY): " << flush;
	cin >> askDate.year;
	return {askDate.day, askDate.month, askDate.year};
}


int validateYear(int inputYear , int yearMinimum, int yearFuture){
	int invalidYear = 0;
	if ((inputYear < yearMinimum) || (inputYear >= yearFuture)) {
		invalidYear = 1;
	}
	return invalidYear;
}

int inputMatchtoValue(int input, int currMonth){
	int Match = 0;
	if (input == currMonth) {
		Match = 1;
	}
	return Match;
}

int validateMonth( int yearMatch, int inputMonth, int currMonth, int maxMonth){
	int invalidMonth = 0;
	if(((yearMatch == 1) & (inputMonth >currMonth )) || ((inputMonth > maxMonth) || (inputMonth < 1 ))){
		invalidMonth = 1;
	}
	return invalidMonth;
}

int findBisiesto(int inputYear){
	int bisiesto = 0;
	if (inputYear % 4 == 0){
		bisiesto = 1;
	}
	return bisiesto;
}


int findMaxDaysMonth(int inputMonth, int bisiesto ){
	int maxDaysMonth = 0;
	if(inputMonth==1 || inputMonth==3 || inputMonth==5 || inputMonth==7 || inputMonth==8 || inputMonth==10|| inputMonth==12){
		 maxDaysMonth = 31;
	} else if ((inputMonth == 2) & (bisiesto == 1)){
		 maxDaysMonth = 29;
	} else if (inputMonth == 2){
		maxDaysMonth = 28;
	} else if (inputMonth == 4 || inputMonth==6 || inputMonth ==9 || inputMonth==11){
		maxDaysMonth = 30;
	} else {
		maxDaysMonth = 32;
	}
	return maxDaysMonth;
}


int match2Items(int x, int y){
	int match = 0;
	if (x==1 & y==1){
		match = 1;
	}
	return match;
}


int findDayError(int yearMonthMatch, int inputDay, int currDay, int maxDaysMonth ){
	int dayError = 0;
	if ((yearMonthMatch==1 & inputDay > currDay) || (inputDay > maxDaysMonth) || (inputDay <= 0 || (maxDaysMonth >= 32))){
		dayError = 1;
	}
	return dayError;
}

bool DateValidation (int dateError, int monthError, int yearError){
	int errorCount = dateError+monthError+yearError;
	bool dateOk = true;
	if (errorCount > 0){
		dateOk = false;
	}
	return dateOk;
}
