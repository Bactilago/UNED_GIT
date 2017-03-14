/*
 * Salario.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: Gorilla-Henry
 */


#include <iostream>
#include "Salario.h"
#include "Fechas.h"
using namespace std;

Salario::Salario() {
	// TODO Auto-generated constructor stub

}

string Salario::getName(){

	cout << askName << flush;
	cin >> name;
	cin >> lastName1;
	cin >> lastName2;
	fullName = name+" "+lastName1+" "+lastName2;
	return fullName;
}


double Salario::salarioPromedio(){
	double salario[3];
	cout << "Digite el ultimo salario: " << flush;
	cin >> salario[0];
	cout << "Digite el penultimo salario: " << flush;
	cin >> salario[1];
	cout << "Digite el ante-penultimo salario: " << flush;
	cin >> salario[2];
	cout << endl;
	double promedio = (salario[0] + salario[1] + salario[2])/3.0;
	subsDiario = promedio/30.0;
	return subsDiario;
}




