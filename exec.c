#include<stdio.h>
#include<pthread.h>
void *thread_function(void *arg);
char str[] = "Hello World";
int main(){

pthread_t a_thread;
pthread_create(&a_thread,NULL,&thread_function,str);
pthread_join(a_thread,NULL);
printf("Thread Finished\n");

}

void *thread_function(void *arg){

printf("Thread function is running. Argument was %s\n",(char*)arg);

}
