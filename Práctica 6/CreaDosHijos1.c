#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main()
{

pid_t pid1, pid2;
int status1, status2;

        if(pid1=fork()==0){
                printf("Soy el primer hijo (%d, hijo de %d)\n", getpid(), getppid());
        }
        else
        {
                if(pid2=fork()==0){
                        printf("Soy el segundo hijo (%d, hijo de %d)\n", getpid(), getppid());
                }
                else{
                       // waitpid(pid1, &status1,0);
                       // waitpid(pid2, &status1,0);
//El padre espera por los hijos para ejecutarse, es decir, espera a que acaben ellos para ejecutarse, si los quito, entonces el padre no espera a que terminen de ejecutarse los hijos y se ejecuta él primero

                        printf("hola");

		}
        }
return 0;
}
