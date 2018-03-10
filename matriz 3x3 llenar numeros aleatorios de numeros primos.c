//Matriz 3x3 con numeros primos 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
	
{
	int pri[8],i,a,j,p,k,m,h;
	int matriz[3][3];
	
	srand(time(NULL));
	
	a=0; //Esta variable la vamos a usar para contar los divisores del número introducido, la inicializamos a 0*/
	
	for(j=0;j<=8;j++)
	{
		a=0;
		
		pri[j]=1+rand()%50;
		
		
		for(i=1;i<=pri[j];i++)
		{
			if(pri[j]%i==0)// si num1 módulo de i es 0, incrementamos a en 1.
			{
				a++;
			}
			
				
		}
		
		
		if(a==2) //Si al final del bucle, a vale 2, el número es primo, porque tiene solamente 2 divisores.
		{
			printf("El número %d es primo\n",pri[j]);
			
			
		}
		else
		{
			j--;
		}
		
	}
	
	/*
	matriz[0][0] = pri[0];
	matriz[0][1] = pri[1];
	matriz[0][2] = pri[2];
	matriz[1][0] = pri[3];
	matriz[1][1] = pri[4];
	matriz[1][2] = pri[5];
	matriz[2][0] = pri[6];
	matriz[2][1] = pri[7];
	matriz[2][2] = pri[8];
	*/
	
	j=0;
	for(p=0;p<=2;p++)
	{ 
		for(k=0;k<=2;k++)
		{
			matriz[p][k] = pri[j];
			j++;
		}
	}	
	
	j=0;
	for(h=0;h<=2;h++)
	{ 
		for(m=0;m<=2;m++)
		{
			printf("Posicion %d = %d\n",j,matriz[h][m]);
			j++;
		}
	}
	
	
	return 0;
}

