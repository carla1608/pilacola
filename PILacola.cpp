#include <iostream>
#include <math.h>

#define TRUE 1
#define FALSE 0
using namespace std;

struct nodo
{
	int nro;
	struct nodo *sgte;
};
/*                      Estructura de la cola      
------------------------------------------------------------------------*/
struct cola
{
	nodo *delante;
	nodo *atras  ;
};
struct pila
{
	nodo *ptrPila;
};

// Prototipos de las funciones
void menuPrincipal();
void menulista();
void menucola();
void menupila();

// funcion de pilas 
void insertapila(struct Pila &p, int valor);
void eliminarpila(struct Pila p);
void mortarpila(struct Pila p);

// Funciones de cola 
void insertacola(struct cola &q, int valor);
void eliminarcola(struct cola q);
void mortarcola(struct cola q);

// Funciones de lista
void insertalista();
void eliminarlista();
void mortarlista();

int main(int argc, char *argv[]) {
	menuPrincipal();
	return 0;
}

void menuPrincipal()
{
	int opcion;
	char repetir = TRUE;
	
	do
	{
		system("cls");
		
		printf("\n\n\t\t\tMENU PRINCIPAL\n");
		printf("\t\t\t--------------\n");
		printf("\n\t1. pilas\n");
		printf("\t2. Cola\n");
		printf("\t3. lista\n");
		printf("\t0. SALIR\n");
		
		printf("\n\tIngrese una opcion: ");
		scanf("%d", &opcion);
		
		switch (opcion)
		{
		case 1:
			menupila();
			break;
			
		case 2:
			menucola();
			break;
		case 3:
			menulista();
			break;
			
		case 0:
			repetir = FALSE;
			break;
		}
	} while (repetir);
}

void menupila()
{
	struct Pila p;
		p= NULL;  
	int dato;
	int x ; 
	int opcion;
	char repetir = TRUE;
	
	do
	{
		system("cls");
		
		printf("\n\n\t\t\tMENU PILAS\n");
		printf("\t\t\t-------------------------\n");
		printf("\n\t1. Inserta\n");
		printf("\t2. Eliminar\n");
		printf("\t3. Mostrar\n");
		printf("\t0. REGRESAR\n");
		
		printf("\n\tIngrese una opcion: ");
		scanf("%d", &opcion);
		
		switch (opcion)
		{
		case 1:
			printf ("NUMERO A APILAR: ");
			scanf ("%",&dato);
				insertapila( p, dato );
			printf ("umero apilado.\n",dato);

			break;
			
		case 2:
			x = eliminarpila( p );
			printf ("umero desapilado.\n",x);
			break;
			
		case 3:
			printf ( " MOSTRANDO PILA\n\n");
			if(p!=NULL)
				mortarpila(p );
			else
				printf ("Pila vacia.\n");
			break;
			
		case 0:
			repetir = FALSE;
			break;
		}
	} while (repetir);
}
void menucola()
{
	struct cola q;
	
	q.delante = NULL;
	q.atras   = NULL;
	
	
	int dato;  // numero a encolar
	int x ;
	int opcion;
	char repetir = TRUE;
	
	do
	{
		system("cls");
		
		printf("\n\n\t\t\tMENU COLA\n");
		printf("\t\t\t-------------------------\n");
		printf("\n\t1. Encolar\n");
		printf("\t2. Desencolar\n");
		printf("\t3. Mostrar\n");
		printf("\t0. REGRESAR\n");
		
		printf("\n\tIngrese una opcion: ");
		scanf("%d", &opcion);
		
		switch (opcion)
		{
		case 1:
			printf ("NUMERO A ENCOLAR: ");
			scanf ("%",&dato);
				insertacola(q, dato );
			printf ("umero encolado.\n",dato);

			break;
			
		case 2:
			x = eliminarcola(q);
			printf ("umero desencolado.\n",x);

			break;
			
		case 3:
			printf ( "MOSTRANDO COLA.\n");
			if(q.delante!=NULL) mortarcola( q );
			else  
				printf ("Cola vacia.\n");
			break;
			
		case 0:
			repetir = FALSE;
			break;
		}
	} while (repetir);
}
void menulista()
{
	int opcion;
	char repetir = TRUE;
	
	do
	{
		system("cls");
		
		printf("\n\n\t\t\tMENU Listas\n");
		printf("\t\t\t-------------------------\n");
		printf("\n\t1. Inserta\n");
		printf("\t2. Eliminar\n");
		printf("\t3. Mostrar\n");
		printf("\t0. REGRESAR\n");
		
		printf("\n\tIngrese una opcion: ");
		scanf("%d", &opcion);
		
		switch (opcion)
		{
		case 1:
			insertalista();
			break;
			
		case 2:
			eliminarlista();
			break;
			
		case 3:
			mortarlista();
			break;
			
		case 0:
			repetir = FALSE;
			break;
		}
	} while (repetir);
}
void insertacola( struct cola &q, int valor )
{
	struct nodo *aux = new(struct nodo);
	
	aux->nro = valor;
	aux->sgte = NULL;
	
	if( q.delante == NULL)
		q.delante = aux;   // encola el primero elemento
	else
		(q.atras)->sgte = aux;
	
	q.atras = aux;        // puntero que siempre apunta al ultimo elemento
	
}
int eliminarcola( struct cola &q )
{
	int num ;
	struct nodo *aux ;
	aux = q.delante;  
	num = aux->nro;
	q.delante = (q.delante)->sgte;
	delete(aux);      
	return num;
}

void mortarcola( struct cola q )
{
	struct nodo *aux;
	
	aux = q.delante;
	
	while( aux != NULL )
	{
		cout<<"   "<< aux->nro ;
		aux = aux->sgte;
	}    
}

void insertapila( struct Pila &p, int valor )
{

	Pila aux;
	aux = new(struct pila);
	aux->nro = valor;
	
	aux->sgte = p ;
	p = aux ;
}
void eliminarpila( struct Pila &p )
{
	int num ;
Pila aux;
	
	aux = p ;
	num = aux->nro; 
	
	p = aux->sgte ;
	delete(aux);
}
void mortarpila( struct Pila &p )
{
 Pila aux;
	aux = p;  
	
	while( aux !=NULL )
	{
		cout<<"\t"<< aux->nro <<endl;
		aux = aux->sgte;
	}    
}
