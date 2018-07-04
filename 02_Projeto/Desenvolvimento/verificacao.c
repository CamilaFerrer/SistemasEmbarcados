#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int num_imagens;
	char line[32];
	char line2[32];
	char comando[31];
	char comando2[47];
	FILE *file;
	FILE *file2;

	while(1){
		system("ls Entrada | wc -l > iniciar.txt");
		file = fopen("iniciar.txt","r");
		if(!file){
			printf("Erro na abertura do arquivo iniciar.txt.");
			exit(1);
		}
		
		fgets(line, sizeof(line), file);
        num_imagens = atoi(line);

        if (num_imagens > 0){
        	system("ls Entrada/*.png > lista.txt");
        
			file2 = fopen("lista.txt","r");
			if(!file2){
				printf("Erro na abertura do arquivo lista.txt.");
				exit(1);
			}
			while (fgets(line, sizeof(line), file2)) {
				if(strcmp (line, "\n") != 0){
					strcpy(line2, line);
					
					sprintf(comando, "./recon %s 1", line);
					system(comando);
					
					sprintf(comando2, "mv %s Imagens/Entrada/", line2);
					system(comando2);
				}
			}
		    
		    fclose(file2);
			system("rm lista.txt");
		}

		fclose(file);
		system("rm iniciar.txt");
	}
	
	
	return(0);
}