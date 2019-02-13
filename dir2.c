#include<dirent.h>
#include<stdio.h>
#include<unistd.h>
int main(){
  struct dirent *d;
  DIR *dr = opendir("/home/mayank/Documents/System_Calls");
  while((d=readdir(dr))!=NULL){
    printf("%s\n",d->d_name);
}

}
