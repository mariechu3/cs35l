#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*declaration of functions*/
int** input(int*size);
int comparator(const void* a, const void* b);
int frobcmp(int const* a, int const* b);

int main()
{    
    int size = 0;
    /*array of pointers to c strings*/
    int ** words = input(&size);
    qsort(words, size, sizeof(char*), comparator);
    //print out the sorted frobnicated strings
    for(int i =0; i < size; i++)
    {
        for(int j = 0; words[i][j]!=' '; j++)
        {
	    putchar(words[i][j]);
            if(ferror(stdout))
            {
                fprintf(stderr, "Error writing output");
                exit(1);
            }
              
        }
        putchar(' ');
        if(ferror(stdout))
        {
           fprintf(stderr, "Error writing output");
           exit(1);
        }
     }

    for(int i=0; i < size; i++)
       free(words[i]);
    free(words);  
            
}

int** input(int* size)
{
    int charsInWord = 0;
    int maxChars = 10;
    int maxWords = 10;
    int* word, **words;
    /*allocating memory for a word and checking if memory allocationg success*/
    word = (int*) malloc(maxChars*sizeof(int));
    if(word == NULL)
    {
       fprintf(stderr, "Could not allocate memory \n");
       exit(1);
    }
    /*allocate for collection of words*/
    words = (int**) malloc(maxWords*sizeof(int*));
    if(words == NULL)
    {
       fprintf(stderr, "Could not allocate memory \n");
       exit(1);
    }
    int c;   
    do
    {    
      c=getchar();
      if(ferror(stdin))
      {
        fprintf(stderr, "Error reading input");
        exit(1);
      }
      if(c == ' ' || c == EOF )
      {
         /*adding more memory for words*/   
         if(*size == maxWords)
         {
            maxWords = (*size) +5;
            words = (int**) realloc(words, maxWords*sizeof(int*));
            if(words == NULL)
            {
               fprintf(stderr, "Could not reallocate memory \n");
               free(words);
               exit(1);
            }
         }
         word[charsInWord] = ' ' ;
         words[*size] = word;
         word = NULL;
         (*size)++;
         if(c != EOF)
             charsInWord = 0;
         maxChars = 10;    
         word = (int*) malloc(maxChars*sizeof(int));
         if(word == NULL)
         {
            fprintf(stderr, "Could not allocate memory \n");
            exit(1); 
         }   
         continue;    
      }
      /*allocating more memory for word*/
      if(charsInWord == maxChars)
      {
         maxChars = charsInWord+5;
         word = (int*) realloc(word, maxChars*sizeof(int));
         if(word == NULL)
         {
           fprintf(stderr, "Could not reallocate memory \n");
           free(word);
           exit(1);
         } 
      }
      word[charsInWord] = c;
      charsInWord++;
    }while(c != EOF);

    if(words[*size-1][charsInWord] != ' ')
    {
       word = words[*size-1];
       word = (int*) realloc(word, (charsInWord+1)*sizeof(int));
       if(word == NULL)
       {
         fprintf(stderr, "Could not reallocate memory \n");  
         exit(1);
       }
       word[charsInWord+1] = ' ';
       words[*size-1] = word;
    } 
    return words;
}
/*returns x<0 if a<b, x>0 if a>b, x==0 if a==b*/
int frobcmp(int const* a, int const* b)
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
    return ((*a)^42) < ((*b)^42) ? -1: 1; /*loop breaks out when *a != *b so
                                           this checks which char at the 
                                           point is "larger"*/    
}
/*needs to be typecasted to use in qsort*/
int comparator(const void* a, const void* b)
{
    return frobcmp(*((int const **)a), *((int const **)b));
}
