//Switch Mes en Español 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	struct tm *tiempo;
	int mes;
	
	
	time_t fecha_sistema;
	time(&fecha_sistema);
	tiempo=localtime(&fecha_sistema);
	
	mes=tiempo->tm_mon +1;
	
	switch(mes)
	{
	case 1:
	{       
		printf("El mes es Enero");
		break;
	}
	case 2:
	{       
		printf("El mes es Febrero");
		break;
	}
	case 3:
	{
		printf("El mes es Marzo");
		break;
	}
	case 4:
	{
		printf("El mes es Abril");
		break;
	}
	case 5:
	{
		printf("El mes es Mayo");
		break;
	}
	case 6:
	{
		printf("El mes es Junio");
		break;
	}
	case 7:
	{
		printf("El mes es Julio");
		break;
	}
	case 8:
	{
		printf("El mes es Agosto");
		break;
	}
	case 9:
	{
		printf("El mes es Septiembre");
		break;
	}
	case 10:
	{
		printf("El mes es Octubre");
		break;
	}
	case 11:
	{
		printf("El mes es Noviembre");
		break;
	}
	case 12:
	{
		printf("El mes es Diciembre");
		break;
	}
	default:
	{
		printf("Error");
		break;
	}
	
	
	return 0;
	}
}
