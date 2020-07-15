#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEFAULT_SIZE 5

/*declaration of functions*/
char** readInput(int *numWords);
void resetWord(char ** word, int* numChars, int* wordSize);

int frobcmp(char const*a, char const*b);
int cmp(const void* a, const void* b);
void writeWords(char **line, int numWords);
void checkIOError(int io);
void checkMemAllocError1(char * word);
void checkMemAllocError2(char ** line);

int main()
{    
    int numWords;
    char **line = readInput(&numWords);
qsort(line, numWords, sizeof(char*), cmp);
writeWords(line, numWords);

for(int i =0; i < numWords; i++)
	free(line[i]);
free(line);
return 0;
}
char **readInput(int* numWords) {
int numChars =0; 
int wordSize = DEFAULT_SIZE;
int lineSize = DEFAULT_SIZE;
*numWords =0;
char *word, **line;
word = (char*) malloc (sizeof(char) *wordSize);
line = (char **) malloc (sizeof(char *) * lineSize);
checkMemAllocError2(line);

char ch = ' ';
while(ch != EOF) {
ch = getchar();
checkIOError(0);
if(!lineSize && ch == ' ') continue;
if(ch == ' ' || ch == EOF){
if(*numWords >= lineSize){
line = (char**) realloc(line, (lineSize = *numWords +DEFAULT_SIZE)*sizeof(char*));
}
word[numChars] = ' ';
if(numChars) line [(*numWords)++] = word;
resetWord(&word, &numChars, &wordSize);
continue;
}
if(numChars >= wordSize -1) {
word = (char*) realloc(word, (wordSize += DEFAULT_SIZE)*sizeof(char));
checkMemAllocError1(word);
}
word[numChars++] = ch;
}
free(word);
return line;
}

void writeWords(char **line, int numWords){
for (int i = 0; i < numWords; i++)
{
for(int j =0; line[i][j] != ' '; j++){
putchar(line[i][j]);
checkIOError(1);
}
putchar(' ');
}
}

void resetWord(char**word, int* numChars, int*wordSize){
*numChars = 0;
*wordSize = DEFAULT_SIZE;
*word = NULL;
*word = (char*) malloc(sizeof(char) * *wordSize);
}
/*returns x<0 if a<b, x>0 if a>b, x==0 if a==b*/
int frobcmp(char const* a, char const* b)
{
    for(; *a == *b; a++, b++)
      if (*a == ' ') return 0;
    return ((*a)^42) < ((*b)^42) ? -1: 1; /*loop breaks out when *a != *b so
                                           this checks which char at the 
                                           point is "larger"*/    
}
/*needs to be typecasted to use in qsort*/
int cmp(const void* a, const void* b)
{
    return frobcmp(*((const char **)a), *((const char**)b));
}
/*if there was error writing to the file*/
void checkIOError(int io)
{
    if(io && ferror(stdout))
    {
        fprintf(stderr, "Error reading input");
    }
    else if( !io && ferror(stdin))
	fprintf(stderr, "error while reading file! \n");
    else return;
   exit(1);
}
/*if there was error allocating memory*/
void checkMemAllocError1(char * word)
{
   /*if pointer is null*/
   if(word == NULL)
   {
       fprintf(stderr, "Memory allocation unsucessfull");
        exit(1);
   }
}
/*if there was error allocatin memory*/
void checkMemAllocError2(char**line)
{
   /*if the pointer is null*/
   if(line == NULL)
   { 
       fprintf(stderr, "Memory allocation unsucessful");
       exit(1);
   }
}
