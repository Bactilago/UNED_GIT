//============================================================================
// Name        : Proyect_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include "Proy2.h"
using namespace std;


int main() {

	// Find current time and return year, month and day //
	time_t hoy = time(0);
	tm *ltm = localtime(&hoy);
	int currYear = 1900 + ltm->tm_year;
	int currMonth = 1 + ltm->tm_mon;
	int currDay = ltm->tm_mday;

	// Constants //
	const int maxMonth = 12;
	const int future = currYear + 1;
	const int minYear = 2000;
	const int secPerDay = 86400;

	cout << "Programa para Calcular Incapacidad" << endl; //
	cout << endl;


	bool ValidDate1;
	while (!ValidDate1) {

	cout << "Ingrese la fecha de inicio de la incapacidad." << endl;
	date fecha1 = getDate();
	cout << endl;

	/*cout << "Ingrese la fecha final de la incapacidad." << endl;
	date fecha2 = getDate();

	cout << endl;
	cout << "La fecha inicial es: " << fecha1.day << "/" << fecha1.month << "/" << fecha1.year << endl;
	cout << "La fecha final es: " << fecha2.day << "/" << fecha2.month << "/" << fecha2.year << endl;

	//Ejemplito//
	/*Validations::error torta;
	torta.findYear = 1;
	cout << torta.findYear << endl;*/

	error validarDate1;

	validarDate1.yearError = validateYear(fecha1.year , minYear , future);
	validarDate1.yearMatch = inputMatchtoValue(fecha1.year, currYear);
	validarDate1.yearBisiesto = findBisiesto(fecha1.year);

	validarDate1.monthError = validateMonth( validarDate1.yearMatch, fecha1.month, currMonth, maxMonth);
	validarDate1.monthMatch = inputMatchtoValue(fecha1.month, currMonth);
	validarDate1.maxDaysMonth =  findMaxDaysMonth(fecha1.month, validarDate1.yearBisiesto );

	validarDate1.yearMonthMatch =  match2Items(validarDate1.yearMatch, validarDate1.monthMatch);

	validarDate1.daysMatch = inputMatchtoValue(fecha1.day, currDay);
	validarDate1.dayError = findDayError(validarDate1.yearMonthMatch, fecha1.day,  currDay,  validarDate1.maxDaysMonth );


	/*cout << "Year Error = "<< validar.yearError << endl;
	cout << "Month Error = " << validar.monthError << endl;
	cout << "Day Error = " << validar.dayError << endl;

	cout << "Year Match = "<< validar.yearMatch << endl;
	cout << "Month Match = " << validar.monthMatch << endl;
	cout << "YearMonth Match = " << validar.yearMonthMatch << endl;
	cout << "DayMatch = " << validar.daysMatch << endl;

	cout << "Bisiesto = " << validar.yearBisiesto << endl;
	cout << "MaxDaysMonth = " <<  validar.maxDaysMonth << endl;*/

	ValidDate1 = DateValidation (validarDate1.yearError, validarDate1.monthError, validarDate1.dayError);
	if (!ValidDate1  ){
	cout << "La fecha ingresada: "  << fecha1.day << "/" << fecha1.month << "/" << fecha1.year << " es incorrecta..." << endl;
	cout << endl;
		}
	cout << "La fecha inicial es: " << fecha1.day << "/" << fecha1.month << "/" << fecha1.year << endl;
	}

return 0;
}
