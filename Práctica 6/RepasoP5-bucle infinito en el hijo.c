#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char*argv[]){
	

	pid_t pid;
	pid_t ppid;

	printf("Arrancando trun trun trun trun trun....\n");
	pid_t mipid;
	mipid = fork();
	pid_t mipidNieto;
	
	if(mipid == -1){
		
	perror("Error en la creacion del hijo");

	}else if(mipid == 0){ //si casca es el primer caso, ahora es el hijo este
	
		printf("El pid del hijo es %d", getpid());
		while(2){
		}


	}else{

		printf("Soy el padre\n");

	}

	
	return 0;
}




