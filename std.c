#include<stdio.h>
#include<unistd.h>
int main(){
  char buffer[100];
  int n = read(0,buffer,15);
  printf("\nNo. of characters : %d\n",n);
  int m = write(1,buffer,15);
  printf("\nNo. of characters : %d\n",m);
}
