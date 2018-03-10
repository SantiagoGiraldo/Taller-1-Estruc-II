//Ejercicio 6/A 3 notas de N alumnos 
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

struct alumno
{
	char nombre[20];
	char apellido[20];
	float cal[3],np;
	
}estu[1000];
int main() 
	
{
	
	int i,x,j;
	
	printf("Cuantos Alumnos va a ingresar: ");
	scanf("%d",&x);
	
	for(i=0;i<=x-1;i++)
	{
		
		fflush (stdin);
		printf("Ingrese el Nombre de Alumno: ");
		fgets(estu[i].nombre,20,stdin);
		printf("Ingrese el Apellido de Alumno: ");
		fgets(estu[i].apellido,20,stdin);
		printf("Ingrese la nota 1: ");
		scanf("%f",&estu[i].cal[0]);
		printf("Ingrese la nota 2: ");
		scanf("%f",&estu[i].cal[1]);
		printf("Ingrese la nota 3: ");
		scanf("%f",&estu[i].cal[2]);
		
		estu[i].np = (estu[i].cal[0] + estu[i].cal[1] + estu[i].cal[2])/3;
		
	}
	
	
	
	for(j=0;j<=x-1;j++)
	{
		fflush (stdin);
		printf("El promedio del Alumno %s %s es de %.2f: \n", estu[j].nombre,estu[j].apellido,estu[j].np);
	}
	/*
	
	char nombre_apellido [100];
	char lugar [100];
	printf ("Como te llamas\?");
	scanf ("%100[^\n]", nombre_apellido);
	printf ("Hola %s, por favor, introduce lo siguiente:\n", nombre_apellido);
	printf ("Donde vives\n?");
	fflush (stdin);
	scanf ("%100[^\n]", lugar);
	printf ("Ahora sé que te llamas %s y vives en %s.\nEsto fue una prueba de C.\n", nombre_apellido, lugar);
	*/
	
	return 0;
}

