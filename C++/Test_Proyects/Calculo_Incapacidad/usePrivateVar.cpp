//============================================================================
// Name        : usePrivateVar.cpp
// Author      : Henry
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Fechas.h"
using namespace std;

int main() {


	Fechas mytime;
	time_t ahora = mytime.setNow();
	tm *fecha = mytime.setTime(ahora);
	mytime.userDate();
	//int year = mytime.getCurrYear(fecha);
	//int month = mytime.setCurrMonth(fecha);
	//int day = mytime.setCurrDay(fecha);
	//int future = mytime.setFuture(year);
	mytime.validateYear();

	Salario name;
	name.getName();

	//mytime.validYear();
	//Salario salario;
	//double subsDiario = salario.salarioPromedio();
	//cout << subsDiario << endl;
	return 0;



}
