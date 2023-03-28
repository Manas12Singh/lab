#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100];
    scanf("%s",s2);
    strcpy(s1,s2);
    if((strupr(s1),strcmp(s1,s2))==0)
        printf("Upper case");
    else if((strlwr(s1),strcmp(s1,s2))==0)
        printf("Lower case");
    else
        printf("Mixed case");
}
