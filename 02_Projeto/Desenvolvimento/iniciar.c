#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int num_imagens;
	char line[32];
	char comando[42];
	FILE *file;

	//while(1){
		system("ls Entrada | wc -l > iniciar.txt");
		file = fopen("iniciar.txt","r");
		if(!file){
			printf("Erro na abertura do arquivo. Fim do programa.");
			exit(1);
		}
		
		fgets(line, sizeof(line), file);
        num_imagens = atoi(line);

        if (num_imagens > 0){
        	system("ls Entrada/*.png > lista.txt");
        }

		fclose(file);

		file = fopen("lista.txt","r");
		if(!file){
			printf("Erro na abertura do arquivo. Fim do programa.");
			exit(1);
		}
		while (fgets(line, sizeof(line), file)) {
			strtok(line, "\n");
			sprintf(comando, "./recon %s 1", line);
	        printf("%s\n", comando);
	    }
	    
	    fclose(file);

		system("rm iniciar.txt");
		//system("rm lista.txt");
	//}
	
	
	return(0);
}