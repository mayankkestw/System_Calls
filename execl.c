#include<stdio.h>
#include<unistd.h>

int main(){
 execl("/bin/pwd","ls",NULL);
}
