#include <stdio.h>
#include <stdlib.h>
#include "bib_arqs.h"

int main (int argc, char *argv[])
{
    char *conteudo;
    le_arq_texto(argv[1], conteudo);
	puts(conteudo);
	free(conteudo);
	return 0;
}
