//Ejercicio 6/C Promedio pero con N alumnos 
#include <stdio.h>
#include<stdio.h>
#include<stdlib.h>

struct promedio
{
	float nota1;
	float nota2;
	float nota3;
	
};

struct alumno
{
	char nombre[20];
	char sexo[10];
	int edad;
	struct promedio persona;
}estu[1000];

int main() 
{
	int i,x,j;
	
	printf("Cuantos Alumnos va a ingresar: ");
	scanf("%d",&x);
	
	float div[1000];
	float mayor = 0.00, menor = 9.99;
	
		
	for(i=0;i<=x-1;i++)
	{
		fflush (stdin);
	printf("Ingrese el Nombre de Alumno: ");
	fgets(estu[i].nombre,20,stdin);
	printf("Ingrese su Sexo: ");
	fgets(estu[i].sexo,10,stdin);
	fflush (stdin);
	printf("Ingrese su Edad: ");
	scanf("%i",&estu[i].edad);
	fflush (stdin);
	printf("Ingrese la nota 1: ");
	scanf("%f",&estu[i].persona.nota1);
	fflush (stdin);
	printf("Ingrese la nota 2: ");
	scanf("%f",&estu[i].persona.nota2);
	fflush (stdin);
	printf("Ingrese la nota 3: ");
	scanf("%f",&estu[i].persona.nota3);
	fflush (stdin);
	
	div[i] = (estu[i].persona.nota1 + estu[i].persona.nota2 + estu[i].persona.nota3)/3;
	
	if(mayor < div[i])
	{
		mayor = div[i];
	}
	if(menor > div[i])
	{
		menor = div[i];
	}
	}
	
	for(j=0;j<=x-1;j++)
	{
	printf("El alumno %s con sexo %s tiene una edad de %d, con un promedio de %.2f\n",estu[j].nombre,estu[j].sexo,estu[j].edad,div[i]);
	
	printf("El mayor promedio es %.2f\n",mayor);
	printf("El menor promedio es %.2f\n",menor);
	
	}
	return 0;
}

