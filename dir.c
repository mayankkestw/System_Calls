#include<stdio.h>
#include<unistd.h>
#include<dirent.h>
int main(){
 struct dirent *d;
 DIR *dr = opendir("/home/mayank/Documents/System_Calls");
 while((d=readdir(dr))!=NULL){
  printf("%s\n",d->d_name);
}
closedir(dr);
return 0;
}
