#include <sys/types.h> 
#include <signal.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define M 5.0 // Duración de la tarea del proceso padre 
#define N 7.0 // Duración de la tarea del proceso padre 


void manejadora(int numeroSenal){
	printf("Se ha acabado la tarea\n");
	sleep(1);
}



int main(void){
 
int x, i=0;
pid_t pid;

//PARA QUE SIGUSR1 FUNCIONE HAY QUE USAR LA MANEJADORA, armar la señal
struct sigaction objeto;
objeto.sa_handler = manejadora;

if(sigaction(SIGUSR1, &objeto, NULL) == -1){
	perror("ERROR AL ENMASCARAR LA SEÑAL\n");
} 


pid=fork();

if (pid==-1){    
 	perror("Error en la llamada a fork()");     
  	exit(0);  
} 
else if (pid == 0) //CODIGO HIJO 
{       
	while(1){

		srand (getpid());  
		x=1+(int)(N*rand()/ RAND_MAX +1.0); 

		 /* X es un número aleatorio entre 1 y N */   
	 
		printf("COMIENZO TAREA HIJO %d\n",i);    
		sleep(x);         
		printf("FIN TAREA HIJO %d\n",i);    
	   	i++; 

		//El hijo termina una tarea, entonces se envía una señal al padre
		kill(getppid(), SIGUSR1); //es una señal que es definida por el usuario
		pause(); //envía al padre y le dice, oyes, que ya acabé vas tu y espera a que el padre le diga de vuelta que ya ha acabado (envíe de vuelta la señal).
		//SIGUE EL HIJO LA SIGUIENTE ITERACION
	}  
  
} else { //CODIGO PADRE 
     while(1) {
	pause(); //le ponemos un pause lo primero porque no podemos asumir que se ejecuta primero que el hijo, entonces le forzamos a que si fuera el primero esperase a que el hijo le madara la señal
	
	//SEGÚN QUE EL HIJO TERMINA, INMEDIATAMENTE VA EL PADRE
	pid_t PIDDeMiHijo = pid;
	srand (getpid());     
	x=1+(int)(M*rand()/ RAND_MAX +1.0);         
	/* X es un número aleatorio entre 1 y N */        
	printf("COMIENZO TAREA PADRE %d\n",i);       
	sleep(x);        
	printf("FIN TAREA PADRE %d\n",i);    
	i++;

	//el padre al acabar su tarea reanuda al hijo
	kill(PIDDeMiHijo, SIGUSR1);

 
    }   
 }   

 return 0; 
}
