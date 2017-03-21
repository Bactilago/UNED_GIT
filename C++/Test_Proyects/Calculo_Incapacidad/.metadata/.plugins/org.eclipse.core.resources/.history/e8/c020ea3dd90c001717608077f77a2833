//============================================================================
// Name        : Proyect1_v_3_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Validation.h"
using namespace std;

	time_t hoy = time(0);
	tm *ltm = localtime(&hoy);

int main() {

	int currYear = 1900 + ltm->tm_year;
	int currMonth = 1 + ltm->tm_mon;
	int currDay = ltm->tm_mday;

	// Constants //
	const int maxMonth = 12;
	const int future = currYear + 1;
	const int minYear = 2000;
	const int secPerDay = 86400;

	int continuar =1;
	while (continuar == 1) {

	cout << "Programa para Calcular Incapacidad"  << endl; // prints !!!Hello World!!!
	Validation empleado;
	//cout << "Nombre de Empleado: " << empleado.getName() << endl;
	string name = empleado.getName();
	cout << "Nombre de Empleado: " << name << endl;
	double subsidio =empleado.salarioPromedio();

	time_t diffDias = -1;
	while (diffDias <= 0) {

	cout << "Digite la fecha inicial de incapacitacion" << endl;
	Validation date1;
	int year1 = date1.validateYear(date1.ingresaAnho(),future,minYear);
	int mes1 = date1.validateMes(year1, currYear, date1.ingresaMes(), currMonth, maxMonth);
	int diasMaxMes1 = date1.findMaxDaysMonth(mes1, date1.findBisiesto(year1));
	int dia1 = date1.validateDiasUsuario(date1.inputDay(), diasMaxMes1, year1, currYear, mes1, currMonth , currDay);
	//obtiene la fecha en segundos usando ctime
	tm fInicial = date1.capturaFecha(year1,mes1,dia1);
	time_t fechaInicial = mktime(&fInicial);
	//cout << fechaInicial << endl;
	cout << endl;

	cout << "Digite la fecha final de incapacitacion" << endl;
	Validation date2;
	int year2 = date2.validateYear(date2.ingresaAnho(),future,minYear);
	int mes2 = date2.validateMes(year2, currYear, date2.ingresaMes(), currMonth, maxMonth);
	int diasMaxMes2 = date2.findMaxDaysMonth(mes2, date2.findBisiesto(year2));
	int dia2 = date2.validateDiasUsuario(date2.inputDay(), diasMaxMes2, year2, currYear, mes2, currMonth , currDay);
	cout << endl;
	cout << "Fecha Inicial DD/MM/YYYY: " << dia1 << "/" << mes1 << "/" << year1 << endl;
	cout << "Fecha Final DD/MM/YYYY: " << dia2 << "/" << mes2 << "/" << year2 << endl;
	cout << endl;
	//obtiene la fecha en segundos usando ctime
	tm fFinal = date2.capturaFecha(year2,mes2,dia2);
	time_t fechaFinal = mktime(&fFinal);
	//cout << fechaFinal << endl;

	diffDias=(fechaFinal-fechaInicial)/secPerDay;
	//cout << diff << endl;
	if (diffDias <=0){
	cout <<"Error: la fecha final no puede ser menor a la fecha de inicio de incapacidad...." << endl;
	cout <<"Vuelva a ingresar las fechas..." << endl;
	cout << endl;
		};

	} // fin de while


	Validation resultados;
	resultados.printResults(diffDias,subsidio, name );

	cout << "Para calcular un nuevo empleado digite 1, para salir digite 0" << endl;
	cout << "Decision: " << flush;
	cin >> continuar;
	} // fin de while continuar
	return 0;
}


