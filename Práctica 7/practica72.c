#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/syscall.h>

pid_t gettid(void) { 
	pthread_t pthread_self(void); //nos permite ver la identificacion de hilo

	//Asimismo ps –p 2345 –T , muestra el listado de todos los hilos del proceso 2345.
}

void *pruebaSpid(void *ptr) {
	printf("Thread secundario: PID=%d, SPID=%d\n", getpid(), gettid()); //gettid es una funcion que no existe como si lo hace el getpid, sino que debemos definirla por nosotros mismos y poner dentro esa instruccion que es la que recopila toda la informacion 
	sleep(10);
	pthread_exit(NULL);
}


int main() {

pthread_t thread1;
pthread_create(&thread1, NULL, pruebaSpid, NULL);
	printf("Thread principal: PID=%d, SPID=%d\n", getpid(), gettid());
	sleep(10);
return 0;

}
