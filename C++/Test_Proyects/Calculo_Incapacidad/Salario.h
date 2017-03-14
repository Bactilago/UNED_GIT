/*
 * Salario.h
 *
 *  Created on: Mar 14, 2017
 *      Author: Gorilla-Henry
 */

#ifndef SALARIO_H_
#define SALARIO_H_
#include <iostream>
#include "Fechas.h"
using namespace std;

class Salario {
private:
	string const askName ="Nombre y apellidos del empleado: ";
	string name;
	string askLastName;
	string lastName1;
	string lastName2;
	string fullName;
	double subsDiario;
public:

	Salario();
	string getName();
	double salarioPromedio();
};

#endif /* SALARIO_H_ */
