//Ejercicio 3/B numero elevado al cuadrado al cubo y a la cuarta 
#include <iostream>
#include <conio.h>
#include <stdio.h>

int main(int argc, char *argv[]) 

{
	int a[4][4];
	int m,j,k;
	
		for(k=0;k<=3;k++)
		{
			
			printf("ingresar los numeros: ");
	        scanf("%d",&a[k][0]);
			
		}
		for(j=0;j<=3;j++)
		{
			
			a[j][1] = a[j][0]*a[j][0];
			a[j][2] = a[j][0]*a[j][0]*a[j][0];
	        a[j][3] = a[j][0]*a[j][0]*a[j][0]*a[j][0];
			
		}
		
		for(m=0;m<=3;m++)
		{
			
			printf("mostrar datos ingresados %d",a[m][0] );
	        printf("\n");
	        printf("mostrar datos ingresados al cuadrado %d",a[m][1] );
			printf("\n");
			printf("mostrar datos ingresados al cubo %d",a[m][2] );
			printf("\n");
			printf("mostrar datos ingresados elevado a la cuarta %d",a[m][3] );
			printf("\n");
		}
	
	
	return 0;
}

