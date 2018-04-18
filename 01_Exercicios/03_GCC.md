## Para todas as questões, compile-as com o gcc e execute-as via terminal.

### 1. Crie um "Olá mundo!" em C.
```
#include <stdio.h>

int main(void)
{
	printf("Ola mundo!\n");
	return -1;
}
```

### 2. Crie um código em C que pergunta ao usuário o seu nome, e imprime no terminal "Ola " e o nome do usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_1':
```
#include <stdio.h>

int main(void)
{
	char name[15];

	printf("Digite o seu nome: ");
	scanf("%s", name);

	printf("Ola %s\n", name);

	return -1;
}
```

```
$ gcc -o ola_usuario_1 ola_usuario_1.c
$ ./ola_usuario_1
$ Digite o seu nome: Eu
$ Ola Eu
```

### 3. Apresente os comportamentos do código anterior nos seguintes casos:

(a) Se o usuário insere mais de um nome.
```bash
$ ./ola_usuario_1 
Digite o seu nome: Eu mesmo
Ola Eu
```

(b) Se o usuário insere mais de um nome entre aspas duplas.
```bash
$ ./ola_usuario_1
$ Digite o seu nome: "Eu Mesmo"
Ola "Eu
```

(c) Se é usado um pipe.
```bash
$ echo Eu | ./ola_usuario_1
Digite o seu nome: Ola Eu
```

(d) Se é usado um pipe com mais de um nome. Por exemplo:
```bash
$ echo Eu Mesmo | ./ola_usuario_1
Digite o seu nome: Ola Eu
```

(e) Se é usado um pipe com mais de um nome entre aspas duplas.
```bash
$ echo "Eu Mesmo" | ./ola_usuario_1
Digite o seu nome: Ola Eu
```

(f) Se é usado o redirecionamento de arquivo.
```bash
$ echo Ola mundo cruel! > ola.txt
$ ./ola_usuario_1 < ola.txt
Digite o seu nome: Ola Ola
```

### 4. Crie um código em C que recebe o nome do usuário como um argumento de entrada (usando as variáveis argc e *argv[]), e imprime no terminal "Ola " e o nome do usuário.

```bash
#include <stdio.h>

int main(int argc, char **argv)
{
	printf("Ola");
	for(int i = 1; i<argc; i++){
		printf(" %s", argv[i]);
	}
	printf("\n");

	return -1;
}
```

### 5. Apresente os comportamentos do código anterior nos seguintes casos:

(a) Se o usuário insere mais de um nome.
```bash
$ ./ola_usuario_2 Eu Mesmo
Ola Eu Mesmo
```

(b) Se o usuário insere mais de um nome entre aspas duplas. Por exemplo:
```bash
$ ./ola_usuario_2 "Eu Mesmo"
Ola Eu Mesmo
```

(c) Se é usado um pipe. Por exemplo:
```bash
$ echo Eu | ./ola_usuario_2
Ola
```

(d) Se é usado um pipe com mais de um nome. Por exemplo:
```bash
$ echo Eu Mesmo | ./ola_usuario_2
Ola
```

(e) Se é usado um pipe com mais de um nome entre aspas duplas. Por exemplo:
```bash
$ echo "Eu Mesmo" | ./ola_usuario_2
Ola
```

(f) Se é usado o redirecionamento de arquivo. Por exemplo:
```bash
$ echo Ola mundo cruel! > ola.txt
$ ./ola_usuario_2 < ola.txt
Ola
```

### 6. Crie um código em C que faz o mesmo que o código da questão 4, e em seguida imprime no terminal quantos valores de entrada foram fornecidos pelo usuário.

```bash
#include <stdio.h>

int main(int argc, char **argv)
{
	printf("Ola");
	for(int i = 1; i<argc; i++){
		printf(" %s", argv[i]);
	}
	printf("\nNumero de entradas = %d\n", argc);

	return -1;
}
```

```
$ ./ola_usuario_3 Eu
Ola Eu
Numero de entradas = 2
```

### 7. Crie um código em C que imprime todos os argumentos de entrada fornecidos pelo usuário.

```bash
#include <stdio.h>

int main(int argc, char **argv)
{
	printf("Argumentos:");
	for(int i = 1; i<argc; i++){
		printf(" %s", argv[i]);
	}
	printf("\n");

	return 0;
}
```

```
$ ./ola_argumentos Eu Mesmo e Minha Pessoa
Argumentos: Eu Mesmo e Minha Pessoa
```

### 8. Crie uma função que retorna a quantidade de caracteres em uma string, usando o seguinte protótipo: `int Num_Caracs(char *string);` Salve-a em um arquivo separado chamado 'num_caracs.c'. Salve o protótipo em um arquivo chamado 'num_caracs.h'. Compile 'num_caracs.c' para gerar o objeto 'num_caracs.o'.

* Aruivo .c:
```
#include "num_caracs.h"

int num_caracs(char *string)
{
	int num;
	
	for(num=0; string[num]; num++);
	
	return num;
}
```

* Arquivo .h:
```
int num_caracs(char *string);
```

* Comando utilizado:
```
gcc -c num_caracs.c
```

### 9. Re-utilize o objeto criado na questão 8 para criar um código que imprime cada argumento de entrada e a quantidade de caracteres de cada um desses argumentos. Por exemplo, considerando que o código criado recebeu o nome de 'ola_num_caracs_1':

```bash
$ ./ola_num_caracs_1 Eu Mesmo
$ Argumento: ./ola_num_caracs_1 / Numero de caracteres: 18
$ Argumento: Eu / Numero de caracteres: 2
$ Argumento: Mesmo / Numero de caracteres: 5
```

* Arquivo .c criado:
```
#include<stdio.h>
#include<stdlib.h>
#include"num_caracs.h"

int main(int argc, char *argv[])
{
	int i = 0;
	for(i=0;i<argc;i++)
	{
		printf("Argumento: ");
		printf("%s ",argv[i]);
		printf("/ Numero de Caracteres: %d\n", Num_Caracs(argv[i]));
	}
	return 0;
}
```

* Comando para compilação:
```
$ gcc -c ola_num_caracs_1.c
```

* Comando para criar o programa
```
$ gcc -o ola_num_caracs_1 ola_num_caracs_1.o num_caracs.o
```

```
$ ./ola_num_caracs_1 Eu Mesmo
Argumento: ./ola_num_caracs_1 / Numero de Caracteres: 18
Argumento: Eu / Numero de Caracteres: 2
Argumento: Mesmo / Numero de Caracteres: 5
```

### 10. Crie um Makefile para a questão anterior.
* Makefile:
```
all: ola_num_caracs_1

ola_num_caracs_1: ola_num_caracs_1.o num_caracs.o
	gcc -o ola_num_caracs_1 ola_num_caracs_1.o num_caracs.o
ola_num_caracs_1.o: ola_num_caracs_1.c num_caracs.h
	gcc -c ola_num_caracs_1.c
num_caracs.o: num_caracs.c num_caracs.h
	gcc -c num_caracs.c
clean:
	rm -f *.o ola_num_caracs_1
```

* Compilação e execução:
```
$ make
gcc -c ola_num_caracs_1.c
gcc -c num_caracs.c
gcc -o ola_num_caracs_1 ola_num_caracs_1.o num_caracs.o
$ ./ola_num_caracs_1 Eu Mesmo
Argumento: ./ola_num_caracs_1 / Numero de Caracteres: 18
Argumento: Eu / Numero de Caracteres: 2
Argumento: Mesmo / Numero de Caracteres: 5
```


### 11. Re-utilize o objeto criado na questão 8 para criar um código que imprime o total de caracteres nos argumentos de entrada. Por exemplo, considerando que o código criado recebeu o nome de 'ola_num_caracs_2':
```
#include <stdio.h>
#include "num_caracs.h"

int main(int argc, char *argv[])
{
	int i = 0;
	int total_caracteres = 0;
	for(i=0; i<argc; i++)
	{
		total_caracteres += num_caracs(argv[i]);
	}
	printf("Total de caracteres de entrada: %d\n",total_caracteres);
	return 0;
}
```

* Compilação e execução:
```
$ gcc -c num_caracs.c
$ gcc -c ola_num_caracs_2.c
$ gcc -o ola_num_caracs_2 ola_num_caracs_2.o num_caracs.o
$ ./ola_num_caracs_2 Eu Mesmo
Total de caracteres de entrada: 25
```

### 12. Crie um Makefile para a questão anterior.
* Makefile:
```
all: ola_num_caracs_2

ola_num_caracs_2: ola_num_caracs_2.o num_caracs.o
	gcc -o ola_num_caracs_2 ola_num_caracs_2.o num_caracs.o
ola_num_caracs_2.o: ola_num_caracs_2.c num_caracs.h
	gcc -c ola_num_caracs_2.c
num_caracs.o: num_caracs.c num_caracs.h
	gcc -c num_caracs.c
clean:
	rm -f *.o ola_num_caracs_2
```
