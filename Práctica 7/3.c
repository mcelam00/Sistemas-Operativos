#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<sys/types.h>




void *hiloColgado(void *ptr) {
	while(1) {
	printf("%s: PID=%d\n", (char *)ptr, getpid());
	sleep(1);
	}
}

void *hiloAsesino(void *ptr) {
	printf("%s: PID=%d. Voy a esperar 10 segundos y termino todo este lío.\n",
	(char *)ptr, getpid());
	sleep(10);
	exit(0);
}

int main() {
	pthread_t thread1, thread2;
	char *message1 = "Hilo colgado";
	char *message2 = "Hilo asesino de proceso";
	pthread_create(&thread1, NULL, hiloColgado, (void*)message1);
	pthread_create(&thread2, NULL, hiloAsesino, (void*)message2);
	while (1){
	printf("Hilo principal: PID=%d\n", getpid());
	sleep(1);
	}
	return 0;
}

//EL RESTO DE LOS HILOS TERMINAN PORQUE TODOS LOS HILOS ESTAN ASICIADOS A UN PROCESO ENTONCES AL TERMINAR EL PROCESO SE ACABA CON TODOS LOS HILOS ASICIOADOS, POR ESO MUEREN TODOS CUANDO EL HIJO ASESESINO EJECUTA EL EXIT Y MATA AL PROCESO PADRE

/**
Salida Esperada:
Hilo colgado
Hilo principal: PID=xx
Hilo principal: PID=
Hilo colgado
Hilo asesino de proceso: PID=xxxxxx. Voy a esperar 10 segundos y termino todo este lío.
Hilo colgado
Hilo principal: PID=
Hilo colgado
Hilo principal: PID=
Hilo colgado
Hilo principal: PID=
Hilo colgado
Hilo colgado
.
.
.
.


**/
