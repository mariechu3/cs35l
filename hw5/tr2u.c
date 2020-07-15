#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void checkInput(char* from, char* to);
//argc is the number of arguments-1 (for the program name)
//argv is an array of strings argv[1] is the first arg
int main(int argc, char* argv[])
{ 
    int i = 0;
    while(argv[i])
       i++;    
    if(i != 3)
    {
       fprintf(stderr, "Invalid number of arguments. \n");
       exit(1);
    }
    char* from = argv[1];
    char* to = argv[2];
    //printf("This is length of argv[1], %d", strlen(argv[1]));
    checkInput(from, to);
    char c;
    int next;
    int check = read(0,&c,1);
    while(check> 0)
    {
       next = 0;
       for(int i=0; i < strlen(from); i++)
       {
           if(c == from[i])
	   {
               c = to[i];
               if(write(1,&c,1) != 1)
                  fprintf(stderr, "error writing character");
               next = 1;
	       break;
           }
       }
       if(next == 0)
          if(write(1,&c,1) != 1)
             fprintf(stderr,"error writing character");          
       check = read(0, &c,1);
    }
    if(check == -1)
       fprintf(stderr, "error reading character");
}
void checkInput(char* from, char* to)
{
    if(strlen(from) != strlen(to))
    {
       fprintf(stderr, "Invalid arguments, not the same length. \n");
       exit(1);
    }
    for(int i = 0; i < strlen(from); i++)
    {
       for(int j = i+1; j < strlen(from); j++)
           if(from[i] == from[j])
           {
              fprintf(stderr, "Invalid arguments, first string contains duplicates. \n");
              exit(1);
           }       
    }    
}
