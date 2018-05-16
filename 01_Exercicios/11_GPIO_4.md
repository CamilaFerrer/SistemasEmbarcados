### 1. Escreva um código em C para gerar uma onda quadrada de 1 Hz em um pino GPIO do Raspberry Pi.

```C
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/poll.h>
#include<unistd.h>
#include<signal.h>

void ctrl_c(int sig)
{
	system("echo 4 > /sys/class/gpio/unexport");
	puts("Arquivos de GPIO apagados. Fim do programa.");
	exit(-1);
}

int main(void)
{
	system("echo 4 > /sys/class/gpio/export");
  system("echo out > /sys/class/gpio/gpio4/direction");
	signal(SIGINT, ctrl_c);
	
  while(1)
	{
		system("echo 1 > /sys/class/gpio/gpio4/value");
		usleep(500000);
		system("echo 0 > /sys/class/gpio/gpio4/value");
		usleep(500000);
	}
	return 0;
}
```

### 2. Generalize o código acima para qualquer frequência possível.

```C
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/poll.h>
#include<unistd.h>
#include<signal.h>

void ctrl_c(int sig)
{
	system("echo 4 > /sys/class/gpio/unexport");
	puts("Arquivos de GPIO apagados. Fim do programa.");
	exit(-1);
}

int main(int argc, char *argv[])
{
	int freq=1;
	if(argc > 1){
		freq = atoi(argv[1]);
	}
	system("echo 4 > /sys/class/gpio/export");
	system("echo out > /sys/class/gpio/gpio4/direction");
	signal(SIGINT, ctrl_c);
	printf("\nGPIO criada. O led piscara na frequencia de %d Hz.\n",freq);
	
  while(1)
	{
		system("echo 1 > /sys/class/gpio/gpio4/value");
		usleep(1000000/(2*freq));
		system("echo 0 > /sys/class/gpio/gpio4/value");
		usleep(1000000/(2*freq));
	}
	return 0;
}
```

3. Crie dois processos, e faça com que o processo-filho gere uma onda quadrada, enquanto o processo-pai lê um botão no GPIO, aumentando a frequência da onda sempre que o botão for pressionado. A frequência da onda quadrada deve começar em 1 Hz, e dobrar cada vez que o botão for pressionado. A frequência máxima é de 64 Hz, devendo retornar a 1 Hz se o botão for pressionado novamente.



