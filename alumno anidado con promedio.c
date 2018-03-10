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
};

int main() 
{
	struct alumno estu;
	float div=0;
	
	
	printf("Ingrese el Nombre de Alumno: ");
	fgets(estu.nombre,20,stdin);
	printf("Ingrese su Sexo: ");
	fgets(estu.sexo,10,stdin);
	fflush (stdin);
	printf("Ingrese su Edad: ");
	scanf("%i",&estu.edad);
	fflush (stdin);
	printf("Ingrese la nota 1: ");
	scanf("%f",&estu.persona.nota1);
	fflush (stdin);
	printf("Ingrese la nota 2: ");
	scanf("%f",&estu.persona.nota2);
	fflush (stdin);
	printf("Ingrese la nota 3: ");
	scanf("%f",&estu.persona.nota3);
	fflush (stdin);
	
	div = (estu.persona.nota1 + estu.persona.nota2 + estu.persona.nota3)/3;
	
	printf("El alumno %s con sexo %s tiene una edad de %d, con un promedio de %.2f",estu.nombre,estu.sexo,estu.edad,div);
	return 0;
}

