#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) 
{
	
	int i,num,total;
	printf("tabla del numero: ");
	scanf("%d",&num);
	
	for(i=1;i<=20;i++)
	{
		total = num * i;
		printf("%d x %d = %d\n",num,i,total);
		
		
	}
	
	return 0;
}
