#include<stdio.h>
int main(){
int pid=fork();
if(pid<0)
        printf("Fork Failure!");
        exit(0);
else if(pid==0)
        printf("Child process: %d Created!",pid);
else
        printf("This is Parent process: %d",getpid());
}
