//Ingresando una vocal para que regrese codigo ASCII
#include <iostream>
#include <conio.h>
#include <stdio.h>

int main(int argc, char *argv[]) 
{
	int opcion;
	int codigo;
	
	printf("ingresar una vocal: ");
	scanf("%d", &opcion);
	
	switch(opcion)
	{
	case 0:
	{       
		codigo = 48;
		printf("el codigo ascii del numero 0 es: %d" , codigo);
		break;
	}
	case 1:
	{       
		codigo = 49;
		printf("el codigo ascii del numero 1 es: %d" , codigo);
		break;
	}
	case 2:
	{
		codigo = 50;
		printf("el codigo ascii del numero 2 es: %d" , codigo);
		break;
	}
	case 3:
	{
		codigo = 51;
		printf("el codigo ascii del numero 3 es: %d" , codigo);
		break;
	}
	case 4:
	{
		codigo = 52;
		printf("el codigo ascii del numero 4 es: %d" , codigo);
		break;
	}
	case 5:
	{
		codigo = 53;
		printf("el codigo ascii del numero 5 es: %d" , codigo);
		break;
	}
	case 6:
	{
		codigo = 54;
		printf("el codigo ascii del numero 6 es: %d" , codigo);
		break;
	}
	case 7:
	{
		codigo = 55;
		printf("el codigo ascii del numero 7 es: %d" , codigo);
		break;
	}
	case 8:
	{
		codigo = 56;
		printf("el codigo ascii del numero 8 es: %d" , codigo);
		break;
	}
	case 9:
	{
		codigo = 57;
		printf("el codigo ascii del numero 9 es: %d" , codigo);
		break;
	}
	}
	return 0;
}

