#include "bib_arqs.h"

int tam_arq_text(char *nome_arquivo)
{
	FILE *fp;
	fp = fopen(nome_arquivo,"r");
	if(!fp)
	{
		printf("Erro ao abrir arquivo. Fim do programa.");
		exit(1);
	}
	int caracteres=0;
	while(getc(fp)!= EOF)
		caracteres++;
	fclose(fp);
	return caracteres-1;
}

void le_arq_texto(char *nome_arquivo, char *conteudo)
{
	int tamanho_arquivo = tam_arq_text(nome_arquivo);
	conteudo = (char*)malloc(tamanho_arquivo*sizeof(char));
	FILE *fp;
	fp = fopen(nome_arquivo,"r");
	if(!fp)
	{
		printf("Erro ao abrir o arquivo. Fim do programa.");
		exit(1);
	}
	if(fgets(conteudo,sizeof(char)*tamanho_arquivo,fp)!=NULL);
	{
		puts(conteudo);
	}
	fclose(fp);
	free(conteudo);
}
