/*
 * Empleado.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: Human Waste
 */

#include "Empleado.h"
#include "Fechas.h"

Empleado::Empleado() {
	// TODO Auto-generated constructor stub

}

void Empleado::header(){
	cout << "*************** Programa para Calcular Pago por Incapacidad de la CCSS ***************" << endl;
	cout << endl;
	cout << "Complete la informacion que se le solicita." << endl;
	cout << "Para avanzar por cada paso digite la informacion solicitada y luego oprima Enter." << endl;
	cout << endl;
}


string Empleado::getName(){
	cout << "Nombre y apellidos del empleado: " << flush;
	cin >> name;
	cin >> lastName1;
	cin >> lastName2;
	fullName = name+" "+lastName1+" "+lastName2;
	return fullName;
}
