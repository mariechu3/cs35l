#include <stdio.h>
char *c[] = {"the", "quick brown fox", "jumped", "over the", "lazy dog"};
char **cp[] = {c+3, c+2, c+1, c, c+4};
char ***cpp = cp;

int main(void)
{
printf("%s\n", **(cpp+3));
printf("%s\n", **(cp+4)+4);
printf("%s\n", **(++cpp));
printf("%s\n", **cp);
printf("%s\n", **(++cpp)+5);
return 0;
}
