//Ejercicio 3/B Ingresar dos valores para un resultado de 0 Y 1
#include <iostream>
#include <conio.h>

int main(int argc, char *argv[]) 

{
	
	int i,n,m,fin,j,k,band=0,band1=0;
	printf("ingrese el primer valor: ");
	scanf("%d",&n);
	printf("ingrese el segundo valor: ");
	scanf("%d",&m);
	fin=n * m;
	int x[fin];
	
	for(i=0;i<=fin;i++)
	{
		if(band==0&&band1==0)
		{
			x[i]=0;
			band=1;
			band1=1;
			
		}
		
		else
		{
			x[i]=1;
			band=0;
			band1=0;
		}
		
		
	}
	
	
		for(j=0;j<fin;j++)
	{
		printf("%d ",x[j]);
		
	}	

	
	
	
	
	return 0;
}

