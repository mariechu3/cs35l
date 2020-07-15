#include <stdio.h>
#include <stdlib.h>
#include <pthread.h> 
#include <unistd.h>
void *printMsg(void *thread_num) {
	int t_num = (int) thread_num;
	printf("It’s me, thread %d!\n", t_num);
	return NULL;
 }

int main() {
	pthread_t tids[3];
	int t;
   
	for(t = 0; t < 3; t++) {
                int ret = pthread_create(&tids[t], NULL, printMsg, (void *)t); 
		if(ret) {
		      printf("Error creating thread. Error code is %d\n", ret);
		      exit(-1); 
		} 
	}
        
        for(t = 0; t < 3; t++)
        {
            int val = pthread_join(tids[t],NULL);
            if(val)
            {
               printf("Error");
               exit(-1);
            }
        }
        //sleep(2);
}

