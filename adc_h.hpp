#pragma once
#include<iostream>
#include <string>
#include <stdlib.h>
using namespace std;
/************************************************
*                 CLASE
************************************************/
class ADC{
	private:
  
		int _num;
		int _resolution;
		int _Fs;
		int _numeroCanales;
		string _nombreCanal;
		
	public:
		float _lectura;
		
		/*********	****************************************************
		//           CONSTRUCTOR
		***********************************************************/
		ADC(int num,int resolution,int Fs,int numeroCanales,string _nombreCanal,float lectura);
		ADC();
		//***************GETTERS
		int getNum();
		int getResolution();
		int getFs();
				
		//*****************SETTERS
		void setResolution(int resolution);
		void setFs(int Fs);
		void setLectura(float lectura);
		
		//METODOS
		int Captura();
		void Conversion(int resolution, float lectura, int i);	
		void MostrarDatos();			
};

