/*
 * Cons.cpp
 *
 *  Created on: Mar 13, 2017
 *      Author: Human Waste
 */

#include "Cons.h"

Cons::Cons() {
	// TODO Auto-generated constructor stub
	string name;

}

string Cons::asignName(string){
	name = Cons::getName();
	return name;
}


string Cons::getName(){
	cout << "Ingrese el nombre: " << flush;
	string nombre;
	cin >> nombre;
	cout << "Ingrese el apellido: " << flush;
	string apellido;
	cin >> apellido;
	string nombreCompleto = nombre+" "+apellido;
	return nombreCompleto;
}

