/*
 * Fechas.cpp
 *
 *  Created on: Mar 14, 2017
 *      Author: Human Waste
 */

#include "Fechas.h"

Fechas::Fechas()

{


}


time_t Fechas::setNow(){
	hoy = time(0);
	return hoy;
}

tm* Fechas::setTime(){
	ltm = localtime(&hoy);
	return ltm;
}

int Fechas::getCurrYear(){
	currYear = 1900 + ltm->tm_year;
	return currYear;
}

int Fechas::setFuture(){
	future = currYear+1;
	return future;
}

int Fechas::setCurrMonth(){
	currMonth = 1 + ltm->tm_mon;
	return currMonth;
}

int Fechas::setCurrDay(){
	currDay = ltm->tm_mday;
	return currDay;
}



void Fechas::getUserDate(){
	cout << "Digite el dia: " << flush;
	cin >> date[0];
	cout << "Digite el mes: " << flush;
	cin >> date[1];
	cout << "Digite el año : " << flush;
	cin >> date[2];
}





int Fechas::findBisiesto() {
		 bisiesto=0;
		if (date[2] % 4 == 0) {
			bisiesto = 1;
	    	}
			return bisiesto;
		} // findBisiesto

int Fechas::findMaxDaysMonth(){
			maxMonth = 0;
		if(date[1]==1 || date[1]==3 || date[1]==5 || date[1]==7 || date[1]==8 || date[1]==10|| date[1]==12){
			 maxMonth = 31;
		} else if ((date[1] == 2) & (findBisiesto() == 1)){
			 maxMonth = 29;
		} else if (date[1] == 2){
			maxMonth = 28;
		} else if (date[1] == 4 || date[1]==6 || date[1] ==9 || date[1]==11){
			maxMonth = 30;
		} else {
			maxMonth = 0;
		}
		return maxMonth;
	}


bool Fechas::checkFormat(){
	dateFormat = true;
	if ((date[0]<=0 || date[0] >31) || ((date[1]<=0||date[1]>12)) || ((date[2]<2000 || date[2]>future))){
		dateFormat = false;
	}
	return dateFormat;
}

//Need to review this one **** Something is not validating the result *****
bool Fechas::avoidFutDates(){
	FutDates = true;
	if((date[2]==currYear) & (date[1]>currMonth)){
	FutDates = false;
		} else if (((!matchYearMonth()) & (date[0]>currDay))){
			FutDates = false;
		}
	return FutDates;
}

bool Fechas::matchYearMonth(){
	ymMatch = true;
	if ((date[2]==currYear) & (date[1]==currMonth)){
		ymMatch = false;
	}
	return ymMatch;
}

void Fechas::validateDate(){
	getUserDate();
	while ((!checkFormat()) || (!avoidFutDates())){
	cout << "Error en formato de la fecha Format" << endl;
	getUserDate();
	}while(date[0] > findMaxDaysMonth() ){
		cout << "Error en formato de la fecha Format" << endl;
		getUserDate();
	}
	cout << "date" <<" " << date[0]<< "/" << date[1] << "/" <<date[2]<< endl;
}



