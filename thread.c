#include<stdio.h>
#include<pthread.h>

typedef struct thread_data{
int a,b,result;
}thread_data;

void *myThread(void *arg){

thread_data *tdata = (thread_data *)arg;

   int a = tdata->a;
   int b = tdata->b;
   int result = a+b;

   tdata->result = result;
   pthread_exit(NULL);
}

int main(){

pthread_t tid;
thread_data tdata;
tdata.a = 10;
tdata.b = 20;
pthread_create(&tid,NULL,&myThread,(void *)&tdata);
pthread_join(tid,NULL);
printf("Sum is %d",tdata.result);
}

