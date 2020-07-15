#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    int c;
    int next;
    do
    {
       c = getchar();
       next = 0;
       for(int i=0; i < strlen(from); i++)
       {
           if(c == from[i])
	   {
               putchar(to[i]);
               next = 1;
	       break;
           }
       }
       if(c != EOF && next == 0)
          putchar(c);
    }while(c != EOF);
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
