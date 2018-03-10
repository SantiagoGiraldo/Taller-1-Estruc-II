#include <iostream>
#include<stdio.h>


int main(int argc, char *argv[]) 
{
	int i,num,temp;
	printf("ingrese el numero factorial: ");
	scanf("%d",&num);
	
	temp = num-1;
	  for(i=temp;i>=1;i--)
	    {
		num = num * i;
		}
	printf("El Factorial es: %d\n",num);
	return 0;
}

