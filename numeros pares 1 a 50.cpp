#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) 
{
	int cont = 1; 
	int sumatoria = 0; 
	//int n= 2;
	
	while(cont <= 50) 
	{
		if(cont % 2 == 0)
		{
			sumatoria = sumatoria + cont;
		}
		
		cont++;
	} 
	
	printf("La sumatoria de los numeros pares del 1 al 50 es igual a: %d", sumatoria); 
	
	return 0;
}

