#include <stdio.h>
char *strcat(char *s1, register const char *s2){
    register char *p = s1;

    while(*p)
        ++p;
    while(*p++ = *s2++)
        ;
    return s1;
}

void main(int argc, char *argv[]){
    char s[20] = "My name is ";
    strcat(s,argv[1]);
    printf("s1: %s\n", s);
}
