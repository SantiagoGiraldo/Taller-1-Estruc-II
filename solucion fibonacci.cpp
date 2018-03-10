
#include <stdio.h>


int main() 
{
	int a,i,fin,ant=0,des=1;
	
	printf("cuantas veces desea el Fibonacci:");
	scanf("%d",&a);
	
	for(i=0;i<=a;i++)
	{
		fin = ant + des;
		ant = des;
		des = fin;
		printf("%d\n",fin);
	}
	
	return 0;
}

