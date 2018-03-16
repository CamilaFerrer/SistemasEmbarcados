#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char name[15];

	printf("Digite o seu nome: ");
	scanf("%s", name);

	printf("Ola %s\n", name);

	return -1;
}
