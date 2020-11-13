#include<stdio.h>

char *strcpy(char *s1, register const char *s2){
    register char *p = s1;
    while(*p++ = *s2++)
        ;
    return s1;
}

int main(int argc, char *argv[]){
    char str1[20] = "apple";
    char str2[20] = "banana";
    char temp[20];

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    return 0;
}
