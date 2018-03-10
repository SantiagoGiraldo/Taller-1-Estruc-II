//Ingresando vocales y retorna un valor en codigo ascii
#include <iostream>
#include <conio.h>
#include <stdio.h>

int main(int argc, char *argv[]) 
{
	char opcion;
	int codigo;
	
	printf("ingresar una vocal: ");
	scanf("%s", &opcion);
	
	switch(opcion)
	{
	  case 'a':
	   {       
		   codigo = 97;
		   printf("el codigo ascii de la vocal a es: %d" , codigo);
		   break;
	   }
      case 'e':
	   {
		   codigo = 101;
		   printf("el codigo ascii de la vocal e es: %d" , codigo);
		   break;
	   }
      case 'i':
	   {
		   codigo = 105;
		   printf("el codigo ascii de la vocal i es: %d" , codigo);
		   break;
	   }
      case 'o':
	   {
		   codigo = 111;
		   printf("el codigo ascii de la vocal o es: %d" , codigo);
		   break;
	   }
      case 'u':
	   {
		   codigo = 117;
		   printf("el codigo ascii de la vocal u es: %d" , codigo);
		   break;
	   }
	}
	return 0;
}

