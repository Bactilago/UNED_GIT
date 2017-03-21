/*
 * Validation.cpp
 *
 *  Created on: Mar 11, 2017
 *      Author: Human Waste
 */

#include "Validation.h"

Validation::Validation() {
	// TODO Auto-generated constructor stub

}


string Validation::getName(){
	cout << "Ingrese el nombre: " << flush;
	string nombre;
	cin >> nombre;
	cout << "Ingrese el apellido: " << flush;
	string apellido;
	cin >> apellido;
	string nombreCompleto = nombre+" "+apellido;
	return nombreCompleto;
}

	double Validation::salarioPromedio(){
	double salario[3];
	cout << "Digite el ultimo salario: " << flush;
	cin >> salario[0];
	cout << "Digite el penultimo salario: " << flush;
	cin >> salario[1];
	cout << "Digite el ante-penultimo salario: " << flush;
	cin >> salario[2];
	cout << endl;
	double promedio = (salario[0] + salario[1] + salario[2])/3.0;
	double subsDiario = promedio/30.0;
	//cout << "Promedio de los 3 salarios es: " << promedio << endl;
	//cout << "El monto del subsidio diario es: " << subsDiario << endl;
	return subsDiario;
}

bool Validation::userSelection(){
	bool continuar = false;
	cout << "Para continuar digite 1, para salir digite 0" << endl;
	cin >> continuar;
	return continuar;
}


int Validation::ingresaAnho() {
		cout << "Ingrese año (YYYY): " << flush;
		int userYear;
		cin >> userYear;
		return userYear;
	}

int Validation::validateYear(int userYear, int future , int minYear  ) {
		while ((userYear > future) || (userYear < minYear)) {
			cout << "Error: numero de año incorrecto ..." << endl;
			cout << "Ingrese año (YYYY): " << flush;
			cin >> userYear;
		}
		return userYear;
	}

int Validation::findBisiesto(int inputYear) {
			int Bisiesto=0;
			if (inputYear % 4 == 0) {
				Bisiesto = 1;
		  }
			return Bisiesto;
		} // findBisiesto


int Validation::ingresaMes() {
		cout << "Ingrese el numero de  mes (MM): " << flush;
		int inputMonth;
		cin >> inputMonth;
		return inputMonth;
	} //fin de ingresaMes

int Validation::validateMes(int inputYear, int currYear, int inputMonth, int currMonth, int maxMonth  ) {
	while (((inputYear == currYear) & (inputMonth > currMonth)) || (inputMonth > maxMonth) || (inputMonth < 1)) {
//int validateMes(int months, int maxMonth  ) {
	//while (months > maxMonth ) {
	  		    cout << "Error numero de mes incorrecto..." << endl;
	  		    cout << "Ingrese el numero de  mes (MM): " << flush;
	  		  	cin >> inputMonth;
	  		  }

	return inputMonth;
}

	int Validation::findMaxDaysMonth(int inputMonth, int bisiesto ){
		int maxDaysMonth = 0;
		if(inputMonth==1 || inputMonth==3 || inputMonth==5 || inputMonth==7 || inputMonth==8 || inputMonth==10|| inputMonth==12){
			 maxDaysMonth = 31;
		} else if ((inputMonth == 2) & (bisiesto == 1)){
			 maxDaysMonth = 29;
		} else if (inputMonth == 2){
			maxDaysMonth = 28;
		} else if (inputMonth == 4 || inputMonth==6 || inputMonth ==9 || inputMonth==11){
			maxDaysMonth = 30;
		} else {
			maxDaysMonth = 32;
		}
		return maxDaysMonth;
	} // end of validate months


	int Validation::inputDay() {
			cout << "Ingrese el numero de dia (DD): " << flush;
			int inputDay;
			cin >> inputDay;
			return inputDay;
		} // end of ingresa dia


	int Validation::validateDiasUsuario(int inputDay, int maxDaysMonth, int inputYear, int currYear, int inputMonth, int currMonth , int currDay) {
		while ((inputDay > maxDaysMonth) || ((inputYear == currYear) & (inputMonth == currMonth) & (inputDay > currDay)) ||  (inputDay <= 0 || (maxDaysMonth >= 32))) {
					cout << "Error numero de dia es incorrecto..." << endl;
					cout << "Ingrese numero de dia (DD): " << flush;
					cin >> inputDay;
					  }
		return inputDay;

	} // end of validateDiasUsuario


	tm Validation::capturaFecha(int year, int month, int day)
		{
			tm tm {0};
			tm.tm_year = year - 1900; // years count from 1900
			tm.tm_mon = month - 1;    // months count from January=0
			tm.tm_mday = day;         // days count from 1
			return tm;
			}

	void Validation::printResults(double diffDias, double subsidio, string name){

		double pagoIncapacidad = 0.00;
		double diasPago = (diffDias - 3);
		double salPromedio = subsidio*30;
		double subsDiarioCaja = subsidio*0.6;
		if(diasPago <= 0){
			cout << "Incapacidad de 3 o menos dias, no aplica subsidio" << endl;
			cout << "El pago correspondiente por incapacidad es: " << pagoIncapacidad << endl;
		} else {
		pagoIncapacidad = (subsDiarioCaja * diasPago);
		cout << "**************************   Resultados  *************************" << endl;
		cout << "Empleado ....................................................... : " << name << endl;
		cout << "El salario promedio de los ultimos 3 meses es de ............... : " << salPromedio << endl;
		cout << "El salario promedio por dia es de .............................. : " << subsidio << endl;
		cout << "El subsidio diario  por incapacidad (60 % promedio diario) es de : " << subsDiarioCaja << endl;
		cout << "Total de dias Incapacidad ...................................... : " << diffDias << endl;
		cout << "Total de dias a pagar por la Caja: ............................. : " << diasPago << endl;
		cout << "El pago total correspondiente por incapacidad es ............... : " << pagoIncapacidad << endl;
		cout << endl;
		}

	}
