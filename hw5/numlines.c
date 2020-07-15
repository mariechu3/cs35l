#include <stdlib.h>
#include <unistd.h>

int main() {
    char c;
    for(int j =0; j < 100; j++){
    for (int i = 0; i < rand()% 30 ; i++) {
        c = rand()% (127-64) + 64;
        write(1, &c, 1);
    }
    c = '\n';
    write(1, &c, 1);
   }
}
