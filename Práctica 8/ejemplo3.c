#include <>
#include <>
#include <>
#include <>
#define N 5.0

pthread_mutex_t mutex;
int i[5]={1,2,3,4,5};
pthread_cond_t condidiones[6];

/*
Cada condición expresa la finalización de un hilo
condiciones[0] fin del hilo main
condiciones[1] fin del hilo t1
condiciones[2] fin del hilo t2
condiciones[3] fin del hilo t3
condiciones[4] fin del hilo t4
condiciones[5] fin del hilo t5
*/

pthread_cond_t condidion; //han entrado lo cinco threads
int M=0; //Numero de threads quew han entrado

vod *hilo(void *ptr){
	int x;
	pthread_mutex_lock(&mutex);
	//Enviar señal al thread main cuando 



//PFINAL:

Vamos a tener una funcion que se va a llamar writeLogMessage
muchos de los mensajes que tienen que aparecer por pantalla han de guardarse en un fichero 
cada vez que quiera acceder a un fichero, tengo que poner el mutex cerrado y cuando acabe de trabajar con el fichero lo abre para que dos hilos no se metan a trabajar con el fichero

FILE *logFile; //declaro el fichero
//para abrirlo tengo varias maneras, tengo que abrirlo con la a de añadir, si lo abro como w se va a machacar lo que haya escrito
fprintf y delante le pongo el fichero para escribir en el pichero
ojo no olvidarse de que cuando salga de la funcion tengo que cerrar el fichero
no debemos de utilizar asimismo variables globales y un core dump es un 0
vamos a tener que usar seguro una estructura, en una sola variable vamos a tener que guardar muchas cosas
