//============================================================================
// Name        : Setters.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Setter.h"
using namespace std;

int main() {

	Setter mytime;
	time_t ahora = mytime.setNow();
	tm *fecha = mytime.setTime(ahora);
	int year = mytime.getCurrYear(fecha);
	int month = mytime.setCurrMonth(fecha);
	int day = mytime.setCurrDay(fecha);
	int future = mytime.setFuture(year);

	cout << year << endl;
	cout << month << endl;
	cout << day << endl;
	cout << future << endl;


	//cout << pinga << endl;
	//int currYear = 1900 + fecha->tm_year;

	//int currMonth = 1 + fecha->tm_mon;
	//cout << currMonth << endl;
	//int currDay = fecha->tm_mday;
	//cout << currDay << endl;

	return 0;
}
