#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
  char a[15],b[10];
  int n = open("os.txt",O_RDWR,0777);
 // int w = write(n," System",5);
 // printf("Written characters : %d",w);
  int p = lseek(n,5,SEEK_SET);
  int r = read(n,a,1);
  printf("\n%d\n",p);
  write(1,a,r);
}
