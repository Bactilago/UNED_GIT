/*
 * Setter.cpp
 *
 *  Created on: Mar 13, 2017
 *      Author: Human Waste
 */

#include "Setter.h"

Setter::Setter() {
	//name = "George";
	//hoy;
	//future = currYear+1;


}

string Setter::toString(){
	return "Person's name is: " + name;
}

void Setter::setName(string newName) {
	name = newName;
}

time_t Setter::setNow(){
	hoy = time(0);
	return hoy;
}

tm* Setter::setTime(time_t &hoy){
	tm *ltm = localtime(&hoy);
	return ltm;
}

int Setter::getCurrYear(tm* date){
	currYear = 1900 + date->tm_year;
	return currYear;
}

int Setter::setFuture(int){
	future = currYear+1;
	return future;
}

int Setter::setCurrMonth(tm* date){
	currMonth = 1 + date->tm_mon;
	return currMonth;
}

int Setter::setCurrDay(tm* date){
	currDay = date->tm_mday;
	return currDay;
}
