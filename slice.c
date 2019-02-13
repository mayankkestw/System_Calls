#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
  int fd = open("abc.txt",O_RDWR,0777);
  int n = lseek(fd,7,SEEK_END);
  printf("\nCursor is at position : %d\n",n);
  char buffer[100];
  read(fd,buffer,7);
  write(1,buffer,7);
  
}
