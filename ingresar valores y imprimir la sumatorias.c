//Ingresar 9 numeros y se suman y retorna una posicion de cada uno 
#include <stdio.h>

int main() 
{
	int a[3][3];
	int i,m,j,k,cont=0;
	
    for(j=0;j<=2;j++)
	 { 
		for(k=0;k<=2;k++)
	    {
		
		printf("ingresar los numeros: ");
		scanf("%d",&a[j][k]);
		
	     }
	 }

	for(i=0;i<=2;i++)
	{ 
		for(m=0;m<=2;m++)
		{
			cont = a[i][m]+cont;
			printf("conteo de posiciones: %d\n",cont);
			
		}
	}
	
	
	return 0;
}

