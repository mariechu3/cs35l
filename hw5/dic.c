#include <stdio.h>
#include <string.h>
char unf;
int unfrob (int targ);
//void print(char*in, char*out);
int main()
{
    char ch;  
    for(int i = 0; i < 128; i++)
    {
       ch = unfrob(i);
       printf("\\%o",ch);

       //ch = (char)i;
       //printf("%c", ch);
       //print(&ch, unfrob(&ch));
   }
}
/*void print(char* in, char*out)
{
  printf("%s --> %s \n", in, out);
}*/
int unfrob (int targ)
{
   unf= (targ)^42;
   return unf;

}
