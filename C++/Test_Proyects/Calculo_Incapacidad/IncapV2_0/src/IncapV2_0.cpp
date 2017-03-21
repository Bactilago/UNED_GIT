//============================================================================
// Name        : IncapV2_0.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Dates.h"
#include "Employee.h"


int main() {

	int continuar =1;							// Valor centinela para iniciar el programa
	while (continuar == 1) {					// Se ejecuta el programa
	Employee datos;
	datos.printHeader();						// imprime informacion acerca del programa
	datos.getName();							// solicita nombre al usuario
	double subsDiario =datos.salarioPromedio(); // crea variable con valor del subsidio diario

	int incap = -1; 							// Inicializa ciclo de solicitud de fechas y validacion
	while (incap <= 0) {					    // se sale del ciclo cuando ambas fechas sean correctas
	Dates fechaInicial;
	fechaInicial.printIniMessage(1);			// Solicita fecha inicial
	fechaInicial.myDate();						// recibe fecha  del usuario
	fechaInicial.validateDate();				// valida que fecha sea correcta
	tm fInicial = fechaInicial.capturaFecha();	// pasa valores de fecha a tm
	time_t inicioIncap = mktime(&fInicial);		// convierte ref tm a segundos

	Dates fechaFinal;
	fechaFinal.printIniMessage(2);				// Solicita fecha final
	fechaFinal.myDate();						// recibe fecha del usuario
	fechaFinal.validateDate();					// valida que fecha sea correcta
	tm fFinal = fechaFinal.capturaFecha();		// pasa valores de fecha a tm
	time_t finalIncap = mktime(&fFinal);		// convierte ref tm a segundos

	Dates incp;
	incap = incp.valImputDates(finalIncap, inicioIncap);  // regresa al flujo si la fecha final es inferior a la inicial
	}

	datos.printResults(incap,subsDiario);		// imprime resultados de calculo de incapacidad

	Employee salida;
	continuar =salida.printExit();				// imprime opcion para salir o continuar centinela del while inicial
	}
	Dates fin;
	fin.printIniMessage(5);						// imprime mensaje de confirmacion de salida del programa
	return 0;
}
