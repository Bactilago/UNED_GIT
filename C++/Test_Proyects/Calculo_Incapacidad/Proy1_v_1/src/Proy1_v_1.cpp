//============================================================================
// Name        : Proy1_v_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Proy1.h"
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



	//test1.yearError = validateYear(fecha1.year , minYear , future);
	//cout << test1.yearError << endl;

	int continuar = 1;
	while (continuar == 1) {
		cout << "Programa para Calcular Incapacidad" << endl; //
		cout << endl;

		error test1;
		cout << "Ingrese la fecha de inicio de la incapacidad." << endl;
		date fecha1 = getDate();
		cout << endl;
		test1.yearError = validateYear(fecha1.year , minYear , future);
				while(test1.yearError==1){
					cout << "Error en la fecha... Intente de nuevo" << endl;
					date fecha1 = getDate();
					test1.yearError = validateYear(fecha1.year , minYear , future);
				}
		cout << "Año aceptado es: " << 	fecha1.year << endl;
		cout << "Desear Continuar? " << endl;
		cin >> continuar;
	}


return 0;
}
