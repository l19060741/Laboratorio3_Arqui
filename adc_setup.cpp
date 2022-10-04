#include <string>
#include <stdlib.h>
#include <math.h>
#include "adc_h.hpp"
/************************************************
*                  CONSTRUCTOR 
************************************************/
ADC::ADC(int num,int resolution,int Fs,int numeroCanales, string nombreCanal, float lectura){

	_num=num;
	_resolution=resolution;
	_Fs=Fs;
	_numeroCanales=numeroCanales;
	_nombreCanal=nombreCanal;
	_lectura=lectura;
	
}


ADC::ADC(){
}
/************************************************
*   			GETTERS
************************************************/
int ADC::getNum(){
	return _numeroCanales;
}
int ADC::getResolution(){
	return _resolution;
}
int ADC::getFs(){
	return _Fs;
}
/************************************************
*  			SETTERS 
************************************************/
void ADC::setResolution(int resolution){
	_resolution=resolution;
}
void ADC::setFs(int Fs){
	_Fs=Fs;
}

void ADC::setLectura(float lectura){
	_lectura=lectura;
}
/************************************************
*   			METODOS 
************************************************/
int ADC::Captura(){
	cout<<endl<<"** Introduce Datos **"<<endl;
	cout<<"Ingrese el numero de canales: ";
	cin>> _numeroCanales;
	cout<<"Dame la resolucion: ";
	cin>> _resolution;
	cout<<"Dame la frecuencia de muestreo: ";
	cin>> _Fs;
	
	int i;
	string canales[32];
	for(i=0;i<_numeroCanales;i++)
	{	
		cout<<endl<<"Ingresa el canal numero "<<i+1<<" que quieres usar:"<<endl;
		cin>>canales[i];
	}
	 return _resolution;
}

void ADC::Conversion(int resolution, float lectura_v, int i){
	float lectura;
	lectura=lectura_v * (pow(2,resolution))/3.3;
	std::cout<<"\n"<<"La lectura del canal "<<i+1<<" es "<<lectura<<std::endl;
}


void ADC::MostrarDatos(){
	std::cout<<"\n"<<"*** Imprimiendo Datos *** "<<std::endl;
	std::cout<<"Numero:"<<_num<<std::endl;
	std::cout<<"Resolucion:"<<_resolution<<std::endl;
	std::cout<<"Fs: "<<_Fs<<std::endl;
}

