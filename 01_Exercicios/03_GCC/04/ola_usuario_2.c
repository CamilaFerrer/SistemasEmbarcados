#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	/*if(argc<2){
		printf(" ----------------------------\n");
		printf("|   Não foi inserido nome    |\n");
		printf("| na chamada deste programa. |\n");
		printf("| Por exemplo:               |\n");
		printf("|    $ ./ola_usuario_2 Eu    |\n");
		printf("|         Ola Eu             |\n");
		printf("|    $                       |\n");
		printf(" ----------------------------\n");
		return -1;
	}*/
	
	printf("Ola");
	for(int i = 1; i<argc; i++){
		printf(" %s", argv[i]);
	}
	printf("\n");

	return -1;
}
