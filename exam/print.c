#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void)
{
int fd1, fd2, sz1,sz2;
char *c1 = (char *) calloc (100, sizeof(char));
char *c2 = (char *) calloc (100, sizeof(char));
fd1 = open("content1.txt", O_RDWR | O_APPEND);
fd2 = open("content2.txt", O_RDWR);
if(fd1 < 0) 
{
perror("Error in opening content1.txt");
exit(1);
}
if(fd2 < 0) {
perror("Error in opening content2.txt");
exit(1);
}
sz1 = read(fd1, c1, 17);
sz2 = read(fd2, c2, 15);
printf("fd1 = %d, fd2 = %d \n", fd1, fd2);
printf("Called read which returned %d \n", sz1);
printf("Content read: %s \n", c2);
write(STDOUT_FILENO, c1, sz1);
write(STDOUT_FILENO, c2, sz2);
close(fd1);
close(fd2);
}
