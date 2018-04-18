#include<stdio.h>
#include"num_caracs.h"

int main(int argc, char *argv[])
{
	int i = 0;
	for(i=0; i<argc; i++)
	{
		printf("Argumento: ");
		printf("%s ",argv[i]);
		printf("/ Numero de Caracteres: %d\n", num_caracs(argv[i]));
	}
	return 0;
}
