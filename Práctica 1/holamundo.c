/* Sistemas operativos	* 
 * Práctica 1		*/


#include <stdio.h>
#include <unistd.h>

int main(){

	int var=0;



	printf("¡Hola!\n");

	for(int i=1; i<=100; i++)
	{
		sleep(i);
		printf("Han pasado %d segundos", i);
	}

	printf("¡Mundo!\n");



	printf("El valor de la variable var es %d\n", var);







return 0;

} 
