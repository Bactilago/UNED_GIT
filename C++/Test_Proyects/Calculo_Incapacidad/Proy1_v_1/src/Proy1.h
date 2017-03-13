/*
 * Proy1.h
 *
 *  Created on: Mar 10, 2017
 *      Author: Human Waste
 */

#ifndef PROY1_H_
#define PROY1_H_

#include <iostream>
#include <ctime>
using namespace std;

struct date {
	int day;
	int month;
	int year;
};

struct error{
		int yearError;
		int monthError;
	};



date getDate(){
	date askDate;
	cout << "Ingrese el dia (DD): " << flush;
	cin >> askDate.day;
	cout << "Ingrese el mes (MM): " << flush;
	cin >> askDate.month;
	cout << "Ingrese el anho (YYYY): " << flush;
	cin >> askDate.year;
	return {askDate.day, askDate.month, askDate.year};
}


int validateYear(int x , int y, int z){
	int result =0;
	if ((x < y) || (x >= z)) {
		result = 1;
	}
	return result;
}

class Validations{
public:




};




#endif /* PROY1_H_ */
