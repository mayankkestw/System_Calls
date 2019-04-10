#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<semaphore.h>
int a=1;
void *incr();
void *decr();
pthread_mutex_t lock;
sem_t s;

int main()
{
	sem_init(&s,0,1);
	pthread_t t1,t2;
	pthread_create(&t1,NULL,&incr,NULL);
	pthread_create(&t2,NULL,&decr,NULL);
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);

	printf("value of a is %d\n\n",a);
}
void *incr()
{
	pthread_mutex_lock(&lock);
	int b;
	sem_wait(&s);
	b=a;
	b=b+1;
	printf("the program is in lock state\n\n\n\n");
	sleep(5);
	sem_post(&s);
	pthread_mutex_unlock(&lock);

}

void *decr()
{
	pthread_mutex_lock(&lock);
	int c;
	sem_wait(&s);
	c=a;
	c=c-1;
	a=c;
	printf("the program 2 is in lock state\n\n");
	sem_post(&s);
	pthread_mutex_unlock(&lock);
}
