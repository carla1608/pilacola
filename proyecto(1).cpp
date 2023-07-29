#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int  n,suma=0,resta=0, num=0; // aca declaramos las variables

	cout << endl;
		for (int i = 1; i <= 20; i++) // realizamos el ciclo que solo ingresa 20 registro
	{
			cout << " ingresar Numero " << i << ": "; //  la intruccion para escribir o teclear
			cin >> n;
			if ((n>=50) && (n<=95))// condicion que solo ingres  del 50 al 95
			{
				// realizamos las funcion  matematica de suma y resta
				suma += n;
				resta -= n;
			}
			else { // en caso que ingresaron numero menor o mayor a 50 -95  indicara este mensaje
				cout << " ingresar numero del 50 al 95: "<< endl;
			}
	}
		cout << "\nSuma: " << suma;// impresion de los resultado de la suma y resta 
		cout << "\nResta: " << resta;
		cout << endl;
	return 0;// fin del proyecto 
}

