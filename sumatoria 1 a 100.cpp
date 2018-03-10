//Ciclo While Sumatoria de 1 a 100
#include <stdio.h>

int main(int argc, char *argv[]) 
{
 int cont=1; 
 int sumatoria = 0; 
 
 while(cont<=100) 
	{ 
	  sumatoria = sumatoria + cont;
	  cont++;
	} 
 printf("La sumatoria de los numeros del 1 al 100 es igual a: %d", sumatoria); 
	
 return 0;
}

