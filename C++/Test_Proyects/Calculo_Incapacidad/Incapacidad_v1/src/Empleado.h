/*
 * Empleado.h
 *
 *  Created on: Mar 14, 2017
 *      Author: Human Waste
 */

#ifndef EMPLEADO_H_
#define EMPLEADO_H_
#include <iostream>
#include <ctime>
using namespace std;
#include "Fechas.h"

class Empleado {
private:
	string name;
	string lastName1;
	string lastName2;
	string fullName;
	double ultSalario;
	double penSalario;
	double antepenSalario;

public:
	Empleado();
	void header();
	string getName();

};

#endif /* EMPLEADO_H_ */
