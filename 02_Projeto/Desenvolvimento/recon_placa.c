#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reconhecimento.h"

int main(int argc, char *argv[]){
	
	char openalpr[183];
	char cleanup_command[26];
	char placa[7];
	char arquivo[15];

	if(argc < 2){  
		printf("---------------------------------------\n");
		printf("Erro na execução. Sem arquivo de imagem\n");
		printf("Fim do programa\n");
		printf("---------------------------------------\n");
		exit(1);
	}

	strncpy(arquivo, argv[1], 15);
  	criar_comando(arquivo, openalpr, cleanup_command);
  	/*system(openalpr);*/

  	extrair_placa(placa, arquivo);

  	salvar_acesso(placa);

  	excluir_arquivos_temp(arquivo, placa);

	return(0);
}