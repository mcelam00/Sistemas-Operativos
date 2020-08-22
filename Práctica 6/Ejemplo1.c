#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
void muestraNumero(int sig);


int main (int argc, char* argv[]){

	if(signal (SIGUSR1, muestraNumero)==SIG_ERR){
		perror("Llamada a signal.");
		exit(-1);

	}
	pause();

}

void muestraNumero(int sig){

	if(signal (SIGUSR1, muestraNumero)==SIG_ERR){
		perror("Llamada a signal.");
		exit(-1);
		

	}
printf("Numero de señal recibida: %d", sig);
}

