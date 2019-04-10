#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
  pid_t p = fork();
  
  if(p>0){
    printf("Hello\n");
    printf("id : %d",getpid());
  }
  else if(p==0){
    sleep(10);
    printf("parent of child id %d",getppid());
    printf("\nOrphan\n");
  }else{
    printf("error");
  }

}
