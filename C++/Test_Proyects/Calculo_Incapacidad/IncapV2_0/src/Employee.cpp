/*
 * Employee.cpp
 *
 *  Created on: Mar 17, 2017
 *      Author: Human Waste
 */

#include "Dates.h"
#include "Employee.h"

Employee::Employee() {
	// TODO Auto-generated constructor stub

}

void Employee::printHeader(){   			// imprime encabezado de programa
	cout << endl;
	cout << "*************** Programa para Calcular Pago por Incapacidad de la CCSS ***************" << endl;
	cout << endl;
	cout << "Complete la informacion que se le solicita." << endl;
	cout << "Para avanzar por cada paso digite la informacion solicitada y luego oprima Enter." << endl;
	cout << endl;
}


string Employee::getName(){				    // solicita nombre del incapacidato
	cout << "Nombre y apellidos del empleado: " << flush;
	cin >> name;
	cin >> lastName1;
	cin >> lastName2;
	cout << endl;
	fullName = name+" "+lastName1+" "+lastName2;
	return fullName;
}


double Employee::salarioPromedio(){			// solicita datos de los ultimos salarios
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
return subsDiario;
}



void Employee::printResults(double diffDias, double subsidio){  // imprime resultados

	double pagoIncapacidad = 0.00;
	double diasPago = (diffDias - 3.00);
	double salPromedio = subsidio*30;
	double subsDiarioCaja = subsidio*0.6;
	if(diasPago <= 0){
		cout << "**************************   Resultados  *************************" << endl;
		cout << "La incapacidad es de 3 o menos dias, no aplica subsidio" << endl;
		cout << "El pago correspondiente por incapacidad es: " << pagoIncapacidad << endl;
	} else {
	pagoIncapacidad = (subsDiarioCaja * diasPago);
	cout << "**************************   Resultados  *************************" << endl;
	cout << "Empleado ....................................................... : " << fullName << endl;
	cout << "El salario promedio de los ultimos 3 meses es de ............... : " << fixed << std::setprecision(2) <<  salPromedio << endl;
	cout << "El salario promedio por dia es de .............................. : " << fixed << std::setprecision(2) << subsidio << endl;
	cout << "El subsidio diario  por incapacidad (60 % promedio diario) es de : " << fixed << std::setprecision(2) << subsDiarioCaja << endl;
	cout << "Total de dias Incapacidad ...................................... : " << fixed << std::setprecision(2) << diffDias << endl;
	cout << "Total de dias a pagar por la Caja: ............................. : " << fixed << std::setprecision(2) << diasPago << endl;
	cout << "El pago total correspondiente por incapacidad es ............... : " << fixed << std::setprecision(2) << pagoIncapacidad << endl;
	cout << "*******************************************************************" << endl;
	cout << endl;
	}

}


int Employee::printExit(){
	int continuar;
	cout << "Para calcular un nuevo empleado digite 1, para salir digite 0" << endl;
	cout << "Decision: " << flush;
	cin >> continuar;
	return continuar;
}
