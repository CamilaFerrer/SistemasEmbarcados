all: main

main: main.c verificacao.c recon.c notificacao.c
	gcc -o main main.c
	gcc -o verificacao verificacao.c
	gcc -o recon recon.c
	gcc -o notificacao notificacao.c

clean:
	rm -rf main
	rm -rf verificacao
	rm -rf recon
	rm -rf notificacao