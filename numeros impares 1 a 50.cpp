//Ciclo While Numeros Impares del 1 a 50
#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) 
{
	int cont = 1; 
	int sumatoria = 0; 
	//int n= 2;
	
	while(cont <= 50) 
	{
		if(cont % 2 == 1)
		{
			sumatoria = sumatoria + cont;
		}
		
		cont++;
	} 
	
	printf("La sumatoria de los numeros impares del 1 al 50 es igual a: %d", sumatoria); 
	
	return 0;
}
