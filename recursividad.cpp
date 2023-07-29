#include <iostream>
#include <math.h>
#define TRUE 1
#define FALSE 0
using namespace std;
int fib(int numero);
int factorial(int n);
int mcm(int numero1, int numero2);
void menuPrincipal();
int main(int argc, char *argv[]) {
	menuPrincipal();
	return 1;
}
void menuPrincipal()
{
	int opcion, numero,numero1, numero2;;
	char repetir = TRUE;
	do
	{
		system("cls");
		printf("\n\n\t\t\tMENU PRINCIPAL\n");
		printf("\t\t\t--------------\n");
		printf("\n\t1.Fibonacci 1\n");
		printf("\t2. factorial\n");
		printf("\t3. Mínimo Común Múltiplo \n");
		printf("\t0. SALIR\n");
		printf("\n\tIngrese una opcion: ");
		scanf("%d", &opcion);
		
		switch (opcion)
		{
		case 1:
			printf("\n Introduce un número Fibonacci: ");
			scanf("%d", &numero);
			
			printf("El fibonacci es %d\n",fib(numero)); 
			system("pause>nul");
			break;
		case 2:
			printf("\n Introduce un número entero: ");
			scanf("%d", &numero);
			printf("\n El número recibido es: %d",numero);
			printf("\n El factorial de %d es: %ld", numero, factorial(numero));	
			printf("\n El resultado de multiplicar el numero n por su factorial %ld", factorial(numero)*numero);
			system("pause>nul");
			break;
		case 3:
			
			printf("\n Introduce Primer número entero: ");
			scanf("%d", &numero1);
			printf("\n Introduce Primer número entero: ");
			scanf("%d", &numero2);
			printf("MCM de %d\n",mcm(numero1, numero2));
			system("pause>nul");
			break;
			
		case 0:
			repetir = FALSE;
			break;
		}
	} while (repetir);
}
int factorial(int n) {
	if(n < 0) return 0;
	else if(n > 1) return n*factorial(n-1);
	return 0;
}
int maximo_comun_divisor(int numero1, int numero2) {
	int temporal;//Para no perder b
	while (numero2 != 0) {
		temporal = numero2;
		numero2 = numero1 % numero2;
		numero1 = temporal;
	}
	return numero1;
}
int mcm(int numero1, int numero2) {
	if(numero1 >= numero2) 
		return (numero1 * numero2) / maximo_comun_divisor(numero1, numero2);
	else  printf("\n Error Primer número no puede ser menor a segundo: %d y %d ",numero1 , numero2);
	return 0;
}
int fib(int numero)
{
	int a,b,actual,i;
	if (numero==0)
	{
		printf("fibonacci 0=1\n");
	}
	else if (numero==1)
	{
		printf("fibonacci 0=1\n");
		printf("fibonacci 1=1\n");
	}
	else
	{
		printf("F0=1\n");
		printf("F1=1\n");
		a=1;
		b=1;
		for (i=2;i<=numero;i++)
		{
			actual=a+b;
			a=b;
			b=actual;
		}
		return actual;
	}return 0;
}
