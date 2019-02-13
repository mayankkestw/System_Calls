#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
  printf("Starts\n");
  pid_t p = fork();
  if(p>0){
  printf("Parent program ends %d\n",p);
  }
  else{
  printf("Parent ends %d\n",p);
}
}
