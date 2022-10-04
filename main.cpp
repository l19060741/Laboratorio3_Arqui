#include <iostream>
#include <string>
#include <stdlib.h>

#include "adc_h.hpp"
//#include "adc_setup.cpp"

using namespace std;
/************************************************
*                 MAIN
************************************************/
int main(int argc, char** argv) {
	int resolution;
	//float lectura[32];
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
	
	
	/*// CREACION DE OBJETOS
	
	Mascota m1("Zeus","Gato","Macho",2);
	
	//MOSTRAMOS DATOS 
	cout<<"La mascota: "<<m1.getName()<<endl;
	cout<<"Su edad es: "<<m1.getEdad()<<endl;
	
	cout<<endl<<"--Cambiando edad y nombre-- "<<endl;
	m1.setEdad(10);
	
	cout<<"Ahora la edad es: "<<m1.getEdad()<<endl<<endl;
	m1.setName("Odin");			//"inline" indica al compilador que "trate" de poner el codigo de _name = name; y no haga la llamada a la funcion para que sea mas rapido
	
	m1.MostrarDatos();
	
	// EJEMPLO  DE FUNCION STATIC
	cout<<endl<<" LAS MASCOTAS TIENEN: "<< Mascota::getPatas()<<" PATAS"<<endl;
	
  
	Gato g1("Zeus","Gato","Siames",2);
	g1.MostrarDatos();
	g1.daPatita();
	
	Perro perro1("Hulk","Perro","Pastor Aleman",5);
	perro1.MostrarDatos();
	
 	perro1.Ladra();*/
	return 0;
}
