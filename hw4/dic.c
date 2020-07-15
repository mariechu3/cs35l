#include <stdio.h>
#include <string.h>
char unf;
char*  unfrob (int targ);
void print(char*in, char*out);
int main()
{
    char*ch;  
    for(int i = 32; i < 128; i++)
    {
       ch = unfrob(i);
       printf("%c", *ch);
       //ch = (char)i;
       //printf("%c", ch);
       //print(&ch, unfrob(&ch));
   }
}
void print(char* in, char*out)
{
  printf("%s --> %s \n", in, out);
}
char* unfrob (int targ)
{
   unf= ((char)((targ)^42));
   return &unf;

}
