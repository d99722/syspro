#include<stdio.h>

size_t strlen(const char *s){
    size_t n;

    for(n=0; *s != '\0'; ++s)
        ++n;
    return n;
}

void main(int argc, char * argv[]){
    printf("%ld\n", strlen(argv[1]));
}
