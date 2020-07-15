#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char* argv[])
{
   char* c;
   int sz; 
   char* arg = argv[1];

   if(argc == 2){
     printf("strcmp: %d", strcmp(arg, "-f"));
     printf("this is: %s", argv[1]);
   }

   /*do
   {
     sz = read(0,c, 1);
     printf("\n");
     if(sz != 0)
       write(1,c,1);
   }while(sz >0);
   */
}
