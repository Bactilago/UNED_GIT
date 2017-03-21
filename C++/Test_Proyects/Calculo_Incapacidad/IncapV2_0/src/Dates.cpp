/*
 * Dates.cpp
 *
 *  Created on: Mar 17, 2017
 *      Author: Human Waste
 */

#include "Dates.h"
#include "Employee.h"
Dates::Dates()

{
	// TODO Auto-generated constructor stub

}


void Dates::myDate(){						// obtiene valor para fecha actual
	hoy = time(0);
	ltm = localtime(&hoy);
	currYear = 1900 + ltm->tm_year;
	currMonth = 1 + ltm->tm_mon;
	currDay = ltm->tm_mday;
	future = currYear+1;

}

void Dates::getUserDate(){					// solicita fecha y la almacena en arreglo
	cout << "Digite el dia (DD): " << flush;
	cin >> date[0];
	cout << "Digite el mes (MM): " << flush;
	cin >> date[1];
	cout << "Digite el año (AAAA): " << flush;
	cin >> date[2];
}

bool Dates::checkFormat(){					// valida que formato de fecha no exceda rangos por defecto
	int dateFormat = true;
	if ((date[0]<=0 || date[0] >31) || ((date[1]<=0||date[1]>12)) || ((date[2]<2000 || date[2]>future))){
		dateFormat = false;
	}
	return dateFormat;
}

int Dates::findBisiesto() {				// revisa si el año ingresado es bisiesto
		 bisiesto=0;
		if (date[2] % 4 == 0) {
			bisiesto = 1;
	    	}
			return bisiesto;
		} // findBisiesto


int Dates::findMaxDaysMonth(){		// obtiene la cantidad maxima de dias para cada mes del año
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

bool Dates::matchYearMonth(){				// define si el año y el mes ingresado por el usuario concuerda con el año y mes actual
	ymMatch = true;
	if ((date[2]==currYear) & (date[1]==currMonth)){
		ymMatch = false;
	}
	return ymMatch;
}

bool Dates::avoidFutDates(){			// identifica si fecha ingresada por usuario esta en el futuro
	FutDates = true;
	if((date[2]==currYear) & (date[1]>currMonth)){
	FutDates = false;
		} else if (((!matchYearMonth()) & (date[0]>currDay))){
			FutDates = false;
		}
	return FutDates;
}


int Dates::validateDate(){			// valida el formato de la fecha y solicita volver a ingresarla si es incorrecta
	getUserDate();
	while ((!checkFormat()) || (!avoidFutDates())){
	cout << "Error en formato de la fecha... vuelva a intentar" << endl;
	getUserDate();
	}while(date[0] > findMaxDaysMonth() ){
		cout << "Error en formato de la fecha ... verifique los dias y vuelva a intentar" << endl;
		getUserDate();
	}
	cout << "La Fecha Ingresada es: "<<" " << date[0]<< "/" << date[1] << "/" <<date[2]<< endl;
	cout << endl;
	return date[3];
}


tm Dates::capturaFecha()		//captura fecha del usuario en tm
		{
			tm tm {0};
			tm.tm_year = date[2] - 1900;
			tm.tm_mon = date[1] - 1;
			tm.tm_mday = date[0];
			return tm;
			}


int Dates::valImputDates(time_t final, time_t inicial){  // obtiene diferencia en segundos de ambas fechas y lo
	diffD = (final-inicial)/secPerDay;					 // divide por los segundos en un dia para obtener la cantidad de dias
	if (diffD<=0){
		printIniMessage(4);
	}
	return diffD;
}

void Dates::printIniMessage(int option){				// registra opciones para imprimir mensajes
	switch (option){
	case 1 :
		cout << "Digite la fecha inicial de incapacitacion" << endl;
	break;
	case 2:
		cout << "Digite la fecha final de incapacitacion" << endl;
	break;
	case 3:
		cout << "Error la fecha final no puede ser anterior a la fecha inicial" << endl;
		cout << "Vuelva a Ingresar las fechas" << endl;
	break;
	case 4:
		cout <<"Error: la fecha final no puede ser anterior a la fecha de inicio de incapacidad...." << endl;
		cout <<"Vuelva a ingresar las fechas..." << endl;
		cout << endl;
	break;
	case 5:
		cout << "Usuario ha salido del programa" << endl;
	break;
	}

}
