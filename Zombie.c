#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
   pid_t p = fork();
   int status;
   if(p>0){
      pid_t a = wait(&status);
      printf("\nProcess id : %d\n",getpid());
      printf("\nParent of process id : %d\n",getppid());
      printf("\nid : %d\n",p);
      sleep(10);
   }
   else{
      printf("\nChild process id : %d\n",getpid());
      printf("\nParent id of Child process : %d\n",getppid());
      printf("\nid : %d\n",p);
   }
}
