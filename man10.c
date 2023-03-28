#include <stdio.h>

void change(int*,int);

int main()
{
    int a=0,b=0;
    int *ptr=&a;
    printf("a: %d\nb:%d\n",a,b);
    change(ptr,b);
    printf("a: %d\nb:%d\n",a,b);
}

void change(int* ptr,int b)
{
    *ptr=10;
    b=10;
}

