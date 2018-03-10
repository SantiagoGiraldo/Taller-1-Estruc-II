//Matriz 3X3 con numeros aleatorios
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int a[3][3];
	int i,m,j,k;
	
	srand(time(NULL));
	
    for(j=0;j<=2;j++)
	 { 
		for(k=0;k<=2;k++)
	    {
		  a[j][k] = 1+rand()%100;
		
	     }
	 }

	for(i=0;i<=2;i++)
	{ 
		for(m=0;m<=2;m++)
		{
			printf("%d\n",a[i][m]);
		}
	}
	
	
	return 0;
}

