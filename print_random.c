//Given Project code
#include "random.h"
#include <stdio.h>
#include <stdlib.h>
char* rand_string_alloc(size_t size);
char* rand_string(char *s,size_t size);

char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}
char* rand_string(char *s,size_t size){
    for(int i=0; i<size;i++){
        s[i]=randchar();
    }
    s[size]='\0';
    return s;
}
int main(){
    rand_string_alloc(5);
    return 0;
}
