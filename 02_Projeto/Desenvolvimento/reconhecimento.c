#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void criar_comando(char * arquivo, char * comando, char * comando_limpeza){
	sprintf(comando, "curl -X POST -F image=@%s.jpg 'https://api.openalpr.com/v2/recognize?recognize_vehicle=0&country=br&secret_key=sk_37ee54be041b6e705d52e8a9' > %s.txt", 
        	arquivo, arquivo);
	sprintf(comando_limpeza, "rm -f %s.txt", arquivo);
}

void excluir_arquivos_temp(char * arquivo, char * placa){
	char arq_openalpr[25];
	char arq_imagem[50];

	sprintf(arq_openalpr, "rm -f %s.txt", arquivo);
	sprintf(arq_imagem, "mv %s.jpg Imagens/%s-%s.jpg", arquivo, placa, arquivo);

	/*system(arq_openalpr);*/
	system(arq_imagem);
	system("rm -f acesso.txt");
	system("rm -f placa.txt");
}

void extrair_placa(char * placa, char * arquivo){
	char comando_placa[60];
	FILE *fp;
	char str[10];
	
	sprintf(comando_placa, "grep plate %s.txt | cut -d' ' -f 18 > placa.txt", arquivo);
	system(comando_placa);
	
	fp = fopen("placa.txt","r+");
	if(!fp){
		printf("Erro na abertura do arquivo. Fim do programa.");
		exit(1);
	}
	
	fseek (fp , 1 , SEEK_SET );
	fscanf(fp, "%s", str);
	strncpy(placa, str, 7);
	
	rewind(fp);
   	fprintf(fp, "%s", placa);
	
	fclose(fp);
}

void salvar_acesso(char * placa){
	FILE *fp, *f_access;
	char filename[26];
	char semana[3], data[10], hora[5];
	
	system("date +'%a %d/%m/%Y %H:%M' > acesso.txt");

	sprintf(filename, "Banco_de_Dados/%s.txt", placa);
	
	f_access = fopen("acesso.txt","r");
	fp = fopen(filename,"a+");
	
	if(!fp && !f_access){
		printf("Erro na abertura dos arquivos. Fim do programa.");
		exit(1);
	}	

	fscanf(f_access, "%s %s %s", semana, data, hora);
	fprintf(fp, "%s %s %s\n", semana, data, hora);

	fclose(f_access);
	fclose(fp);
}