/*
 * ConsEmpl.cpp
 *
 *  Created on: Mar 13, 2017
 *      Author: Human Waste
 */

#include "ConsEmpl.h"

ConsEmpl::ConsEmpl() {
	// TODO Auto-generated constructor stub
	//string name = ConsEmpl::getName();

}

string ConsEmpl::getName(){
	cout << "Ingrese el nombre: " << flush;
	string nombre;
	cin >> nombre;
	cout << "Ingrese el apellido: " << flush;
	string apellido;
	cin >> apellido;
	string nombreCompleto = nombre+" "+apellido;
	return nombreCompleto;
}
