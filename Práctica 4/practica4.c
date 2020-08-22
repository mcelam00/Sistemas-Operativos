#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){


char comando[100];
char *dir;
int retorno;


	if(argc == 1){  //no recibimos ningun argumento

		dir= ".";
	}
	else if(argc == 2){ //si resulta que le paso el directorio en los parametros pongo ese directorio




		sprintf(comando, "test -d %s", argv[1]);
		retorno = system(comando); //System es el que me va a ejecutar el comando, no lo va a hacer la linea de arriba. y el valor de retorno será el que de el system

		if(retorno == 0){ //funciona bien el comando
		
	
			dir = argv[1];


		}else{
			printf("ERROR, Fin de la ejecución\n");		
			exit(-1);

		}

	}
	else if(argc >= 3){

		printf("ERROR, Fin de la ejecución\n");		
		exit(-1);

	}


do{

boolean testigo = true;
int opcion = 10;
//Mostrar menu

printf("Program Menu\n");

printf("Numero de archivos\n");
printf("Numero de subdirectorios\n");
printf("Fichero mas grande\n");
printf("Fichero mas pequeño\n");
printf("Espacio total ocupado\n");
printf("Numero de ficheros con permiso de lectura para el usuario que ejecuta el script\n");
printf("Numero de ficheros con permiso de escritura para el usuario que ejecuta el script\n");
printf("Numero de ficheros con permiso de ejecucion para el usuario que ejecuta el script\n");
printf("Ficheros con permiso de ejecucion para todos los usuarios\n");
printf("Salir\n");







printf("Por favor introduzca una opcion\n");

scanf(%d, &opcion);

switch(opcion){


	case 1:

case 2:

case 3:

case 4:

case 5:

case 6:
case 7:
case 8:
case 9:
case 10:
	printf("Saliendo del programa\n");
	exit(-1);
default:
	testigo = false;



}while(testigo == true);





}





		
