//============================================================================
// Name        : Incapacidad_v1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Fechas.h"
#include "Empleado.h"
using namespace std;

int main() {



	Empleado print;
	print.header();
	print.getName();
	cout << endl;
	cout << "Inicio de la Incapacidad" << endl;

	Fechas hoy;
	hoy.setNow();
	hoy.setTime();
	hoy.getCurrYear();
	hoy.setCurrMonth();
	hoy.setCurrDay();
	hoy.setFuture();
	hoy.validateDate();



	Fechas late;
	late.setNow();
	late.setTime();
	late.getCurrYear();
	late.setCurrMonth();
	late.setCurrDay();
	late.setFuture();
	late.validateDate();
	return 0;
}
