#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	printf("Ola");
	for(int i = 1; i<argc; i++){
		printf(" %s", argv[i]);
	}
	printf("\nNumero de entradas = %d\n", argc);

	return -1;
}
