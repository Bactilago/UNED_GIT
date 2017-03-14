/*
 * Fechas.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: Gorilla-Henry
 */

#include "Fechas.h"

Fechas::Fechas() {

}

string Fechas::toString(){
	return "Person's name is: " + name;
}

void Fechas::setName(string newName) {
	name = newName;
}

time_t Fechas::setNow(){
	hoy = time(0);
	return hoy;
}

tm* Fechas::setTime(time_t &hoy){
	tm *ltm = localtime(&hoy);
	return ltm;
}

/*int Fechas::getCurrDate(tm* date){
	currDate[0]= 1900 + date->tm_year;
	currDate[1]= 1 + date->tm_mon;
	currDate[2]= date->tm_mday;
	currDate[3]= currDate[0]+1;
}*/

int Fechas::getCurrYear(tm* date){
	currYear = 1900 + date->tm_year;
	return currYear;
}

int Fechas::setFuture(int){
	future = currYear+1;
	return future;
}

int Fechas::setCurrMonth(tm* date){
	currMonth = 1 + date->tm_mon;
	return currMonth;
}

int Fechas::setCurrDay(tm* date){
	currDay = date->tm_mday;
	return currDay;
}


void Fechas::userDate(){
	cout << "Digite el dia: " << flush;
	cin >> date[0];
	cout << "Digite el mes: " << flush;
	cin >> date[1];
	cout << "Digite el anio : " << flush;
	cin >> date[2];
}

int Fechas::validateYear() {
		while ((date[2] > future) || (date[2] < minYear)) {
			cout << "Error: numero de año incorrecto ..." << endl;
			cout << "Ingrese año (YYYY): " << flush;
			cin >> date[2];
		}
		return userYear;
	}
