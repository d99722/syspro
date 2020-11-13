#include <stdio.h>
void swap(int *, int *);
void bubble(int[], int);

int main(void){
    int a[] = {7,3,66,3,-5,22,77,2};
    bubble(a,8);
    for(int i=0; i<8; i++)
        printf("[%d] ", a[i]);
    return 0;
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void bubble(int a[], int n)
{
    int i, j;

    for(i=0; i<n-1; ++i)
        for(j=n-1; j>i; --j)
            if(a[j-1]>a[j])
                swap(&a[j-1], &a[j]);
}
