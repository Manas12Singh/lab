#include <stdio.h>
#include <ctype.h>

int main()
{
    int a1=1,a2=2;
    int *p=a2;
    int *p1=a1;
    int *p3=p+p1;
    printf("%u\n",p3);
}
