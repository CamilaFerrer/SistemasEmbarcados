all: recon_placa
 
recon_placa: recon_placa.o reconhecimento.o
	gcc -o recon_placa recon_placa.o reconhecimento.o
 
recon_placa.o: recon_placa.c reconhecimento.h
	gcc -o recon_placa.o recon_placa.c -c -W -Wall -ansi -pedantic
 
reconhecimento.o: reconhecimento.c reconhecimento.h
	gcc -o reconhecimento.o reconhecimento.c -c -W -Wall -ansi -pedantic
 
clean:
	rm -rf *.o *~ recon_placa