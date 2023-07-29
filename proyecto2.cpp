#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(int argc,char *argv[])
{
	// Creación de variables a utilizar
	int radio;
	double longitud, area,vefera;
	const double PI = 3.141593;
	
	// Solicitar el radio por teclado
	cout<<"Imgresar el numero de radio"<<endl;
	cin>> radio;
	
	// Realizar los calculos
	longitud = 2*PI*radio;
	area = PI*(radio*radio);
	vefera = (4/3)*PI*(radio*radio*radio);

	// Visualizar los resultados

	printf("\n La Longitud de una circunferencia = %.2f",longitud);
	printf("\n El Area de una circunferencia = %.2f",area);
	printf("\n El Volumen de una Efera= %.2f",vefera);
	return 0;
}
