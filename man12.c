#include <stdio.h>

void change(int*,int*);

int main()
{
    int a=0,b=10;
    printf("a: %d\nb:%d\n",a,b);
    change(&a,&b);
    printf("a: %d\nb:%d\n",a,b);
}

void change(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

