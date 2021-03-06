## Para todas as questões, utilize as funções da biblioteca `stdio.h` de leitura e de escrita em arquivo (`fopen()`, `fclose()`, `fwrite()`, `fread()`, dentre outras). Compile os códigos com o gcc e execute-os via terminal.

### 1. Crie um código em C para escrever "Ola mundo!" em um arquivo chamado 'ola_mundo.txt'.
```C
int main()
{
	FILE *fp;
	fp = fopen("ola_mundo.txt","w");
	if (!fp)
	{
		printf("Erro na abertura do arquivo. Fim do programa.");
		exit(1);
	}
	fputs("Ola mundo!!!\n", fp);
	fclose(fp);
	return 0;
}
```

### 2. Crie um código em C que pergunta ao usuário seu nome e sua idade, e escreve este conteúdo em um arquivo com o seu nome e extensão '.txt'. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_1':
```C
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char nome[50];
	int idade;
	FILE *fp;
	printf("Digite o seu nome: ");
	scanf("%[^\n]s",nome);
	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	fp = fopen("Eu.txt","w");
	if(!fp)
	{
		printf("Erro na abertura do arquivo. Fim do programa.");
		exit(1);
	}
	fprintf(fp,"Nome: %s\nIdade: %d anos\n", nome, idade);
	fclose(fp);
	return(0);
}
```

```
$ ./ola_usuario_1
Digite o seu nome: Eu
Digite a sua idade: 30
$ cat Eu.txt
Nome: Eu
Idade: 30 anos
```

### 3. Crie um código em C que recebe o nome do usuário e e sua idade como argumentos de entrada (usando as variáveis `argc` e `*argv[]`), e escreve este conteúdo em um arquivo com o seu nome e extensão '.txt'. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_2':
```C
#include <stdio.h>
#include <stdlib.h>

int main(int arc, char *argv[])
{
	FILE *fp;
	fp = fopen("Eu.txt","w");
	if(!fp)
	{
		printf("Erro na abertura do arquivo. Fim do programa.");
		exit(1);
	}
	fprintf(fp,"Nome: %s\nIdade: %d\n", argv[1], atoi(argv[2]));
	fclose(fp);
	return(0);
}
```

```
$ ./ola_usuario_2 Eu 30
$ cat Eu.txt
Nome: Eu
Idade: 30 anos
```

### 4. Crie uma função que retorna o tamanho de um arquivo, usando o seguinte protótipo: `int tam_arq_texto(char *nome_arquivo);` Salve esta função em um arquivo separado chamado 'bib_arqs.c'. Salve o protótipo em um arquivo chamado 'bib_arqs.h'. Compile 'bib_arqs.c' para gerar o objeto 'bib_arqs.o'.
* Arquivo .c:
```C
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
```

* Arquivo .h:
```H
#include <stdio.h>
#include <stdlib.h>

int tam_arq_text(char *nome_arquivo);
```

* Compilação:
```
$ gcc -c bib_arqs.c
```


### 5. Crie uma função que lê o conteúdo de um arquivo-texto e o guarda em uma string, usando o seguinte protótipo: `void le_arq_texto(char *nome_arquivo, char *conteudo);` Repare que o conteúdo do arquivo é armazenado no vetor `conteudo[]`. Ou seja, ele é passado por referência. Salve esta função no mesmo arquivo da questão 4, chamado 'bib_arqs.c'. Salve o protótipo no arquivo 'bib_arqs.h'. Compile 'bib_arqs.c' novamente para gerar o objeto 'bib_arqs.o'.
```C
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
```

* Arquivo .h:
```H
#include <stdio.h>
#include <stdlib.h>

int tam_arq_text(char *nome_arquivo);

void le_arq_texto(char *nome_arquivo, char *conteudo);
```

* Compilação:
```
$ gcc -c bib_arqs.c
```

### 6. Crie um código em C que copia a funcionalidade básica do comando `cat`: escrever o conteúdo de um arquivo-texto no terminal. Reaproveite as funções já criadas nas questões anteriores.



```
$ echo Ola mundo cruel! Ola universo ingrato! > ola.txt
$ ./cat_falsificado ola.txt
Ola mundo cruel! Ola universo ingrato!
```

### 7. Crie um código em C que conta a ocorrência de uma palavra-chave em um arquivo-texto, e escreve o resultado no terminal. Reaproveite as funções já criadas nas questões anteriores. Por exemplo, considerando que o código criado recebeu o nome de 'busca_e_conta':

```bash
$ echo Ola mundo cruel! Ola universo ingrato! > ola.txt
$ ./busca_e_conta Ola ola.txt
'Ola' ocorre 2 vezes no arquivo 'ola.txt'.
```
