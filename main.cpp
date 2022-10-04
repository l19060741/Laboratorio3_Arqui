#include <iostream>
#include <string>
#include <stdlib.h>

#include "adc_h.hpp"

using namespace std;
/************************************************
*                 MAIN
************************************************/
int main(int argc, char** argv) {
	int resolution;
	
	cout<<"ARQUITECTURA DE PROGRAMACIÓN PARA HARDWARE"<<endl;
	cout<<"LABORATORIO 3"<<endl;
	cout<<"ANAHI GONZALEZ HOLGUIN"<<endl;
	cout<<"CONFIGURACION DEL ADC"<<endl;
	ADC adc;
	resolution=adc.Captura();
	int i;
	for(i=0;i<adc.getNum();i++)
	{	
		float lectura_v;
		cout<<endl<<"Ingresa la lectura en volts del canal numero "<<i+1<<endl;
		cin>>lectura_v;
		adc.Conversion(resolution,lectura_v,i);
	}
	
	return 0;
}
