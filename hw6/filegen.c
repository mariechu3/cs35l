#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <math.h>
int main()
{
   int fd = open("/dev/urandom", O_RDONLY);   
   int num = pow(2, 24);
   int sz = num*4;
   printf("this is the size %d", sz);
   float* c = (float*) malloc(num*sizeof(float));
   if(read(fd, c, sz) < 0)
      fprintf(stderr, "error");
   if(write(1, c, sz) != sz)
      fprintf(stderr, "error");
  
}
