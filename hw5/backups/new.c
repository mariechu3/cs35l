#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <ctype.h>
/*declaration of functions*/
char** input(int*size, int* numwords);
int comparator(const void* a, const void* b);
int frobcmp(char const* a, char const* b);
int f = 1;
int main(int argc, char* argv[])
{    
    if(argc >2)
    {
      fprintf(stderr, "Wrong number of inputs\n");
      exit(1);
    }
    if(argc ==2)
    {
        f = strcmp(argv[1], "-f");
        if(f)
        {
           fprintf(stderr, "Invalid operand %s", argv[1]);
           exit(1);
        }
    }
    int numwords = 0;
    int size = 0;
    char c;
    /*array of pointers to c strings*/
    char ** words = input(&size, &numwords);
    qsort(words, numwords, sizeof(char*), comparator);
    //print out the sorted frobnicated strings
    for(int i =0; i < numwords; i++)
    {
        for(int j = 0; words[i][j]!=' '; j++)
        {
            c = words[i][j];
	    if(write(1,&c,1) != 1)
            {
                fprintf(stderr, "Error writing output");
                exit(1);
            }
              
        }
        c = ' ';
        if(write(1,&c,1) != 1)
        {
           fprintf(stderr, "Error writing output");
           exit(1);
        }
     }

   free(words);  
            
}

char** input(int* size, int* numwords)
{
      
    struct stat s;
    int check = fstat(STDIN_FILENO, &s);
    if(check<0)
    {
       fprintf(stderr, "Error cannot read file. \n");
    }
    int reg = 0;
    if(S_ISREG(s.st_mode))
    {
        reg = 1;
        (*size) = s.st_size;
    }
    char* input, **words;
    /*allocating memory for a word and checking if memory allocationg success*/
    input = (char*) malloc(((*size)+1)*sizeof(char));
    if(size == NULL)
    {
       fprintf(stderr, "Could not allocate memory \n");
       exit(1);
    }
    /*allocate for collection of words*/
    if(reg)
    {
       if(read(0,input,*size) != (*size))
       {  
           fprintf(stderr, "Error cannot read input");
           exit(1);
       }
    
    if(input[(*size)-1] != ' ')
    {
        input[*size] = ' ';
        (*size)++;
    }
    }
   
    char c;
    while(read(0, &c, 1) > 0)
    {
       input[*size] = c;
       (*size)++;
       input = (char*) realloc(input, ((*size)+1)*sizeof(char));
    }  
    if(input[(*size)-1] != ' ')
    {
       input[*size] = ' ';
       (*size)++;
    } 
    int wordInd = 0;
    for(int i = 0; i < (*size); i++)
    {
       if(input[i] == ' ')
       {
          (*numwords)++;
       }
    }
    words = (char**) malloc((*numwords)*sizeof(char*));
    int num = 0;
    for(int i = 0; i < (*size); i++)
    {
       if(input[i] == ' ')
       {
          words[num] = &input[wordInd];
          num++;
          wordInd= i+1;
       }
    }
    input = NULL;
    return words;
}
/*returns x<0 if a<b, x>0 if a>b, x==0 if a==b*/
int frobcmp(char const* a, char const* b)
{

    while(*a == *b)	 /*while a and b are the same*/
    {
        if(*a == ' ')    /*if this is reached and a is a space*/
           return 0;     /*the strings are the same*/
        a++;
        b++;
    }
    if (*a == ' ') return -1; /* if a is a prefix, it is smaller*/
    if (*b == ' ') return 1;  /* if b is a prefix. it is smaller*/
    if(!f)
      return toupper((unsigned char)(*a ^42)) < toupper((unsigned char)(*b ^42)) ? -1: 1;
    else
      return ((*a)^42) < ((*b)^42) ? -1: 1; /*loop breaks out when *a != *b so
                                           this checks which char at the 
                                           point is "larger"*/    
}
/*needs to be typecasted to use in qsort*/
int comparator(const void* a, const void* b)
{
    return frobcmp(*((char const **)a), *((char const **)b));
}
