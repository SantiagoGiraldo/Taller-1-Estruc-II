#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct competidor
{
	char nombre[20];
	int edad;
	char sexo[10];
	char club[20];

};
int main() 
	
{
	char categoria[9];
	competidor a;
	
	printf("ingresar el nombre :");
	fgets(a.nombre,20,stdin);
	printf("ingresar la edad :");
	scanf("%d",&a.edad);
	fflush(stdin);
	printf("ingresar Sexo :");
	fgets(a.sexo,10,stdin);
	fflush(stdin);
	printf("ingresar el Club :");
	fgets(a.club,20,stdin);
	fflush(stdin);

	
	if(a.edad<=15)
	{
		strcpy(categoria,"Juvenil");
	}
	if(a.edad <= 30 && a.edad > 15 )
	{
		strcpy(categoria,"Joven");
	}
	if(a.edad > 30)
	{
		strcpy(categoria,"Mayor");
	}
	
	fflush(stdin);
	printf("El competidor %s con edad de %d, de sexo %s, del club %s esta en la caetegoria %s", a.nombre,a.edad,a.sexo,a.club,categoria);
	
	
	
	
	
	return 0;
}

