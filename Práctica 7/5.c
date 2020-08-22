#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<sys/types.h>


#define N 15.0



void *tareaHilo(void *ptr) {
int x;
printf("COMIENZO TAREA HILO %d\n", *(int *)ptr);
srand ((int)pthread_self());
x = 1+(int)(N*rand()/RAND_MAX+1.0); // X es un número aleatorio entre 1 y N
sleep(x);
printf("FIN TAREA HILO %d\n",*(int *)ptr);
}

int main() {
pthread_t thread1;
int hilo = 1;
pthread_create(&thread1, NULL, tareaHilo, &hilo);
sleep(1);
hilo++;
tareaHilo(&hilo);
pthread_exit(NULL);
return 0;
}

//El problema es que el hilo 1 comienza pero no termina, esto se debe a que el hilo dos termina antes que el uno y hace un exit, de manera que el proceso termina, y al terminar el proceso se eliminan todos los hilos que esten asociados a el, entonces el proceso termina antes de que el hilo 1 termine  y por tanto no llega a acabar nunca y se destruye conforme termina el proceso
