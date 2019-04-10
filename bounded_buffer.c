#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<semaphore.h>
#include<stdlib.h>
void *producer();
void *consumer();

sem_t full, empty, mutex;

int main(){
  int n;
  scanf("%d",&n);
  sem_init(&full,0,0);
  sem_init(&empty,0,n);
  sem_init(&mutex,0,1);
  pthread_t p,c;
  pthread_create(&p,NULL,&producer,NULL);
  pthread_create(&c,NULL,&consumer,NULL);
  pthread_join(p,NULL);
  pthread_join(c,NULL);
}
void *producer(){
 sleep(3);
 sem_wait(&empty);
 sem_wait(&mutex);
 
 printf("I am producer bro");
 
 sem_post(&mutex);
 sem_post(&full);
}

void *consumer(){
 sem_wait(&full);
 sem_wait(&mutex);

 printf("I am a consumer");
 
 sem_post(&mutex);
 sem_post(&empty);
}
