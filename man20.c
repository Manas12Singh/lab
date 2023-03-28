//wacp to read a string, read another string and check wether second string is present in a string.

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[200],s2[200];
    char *s3,*s4;
    int flag=0,i=0,j;
    s3=s1;
    s4=s2;
    gets(s1);
    gets(s2);
    if(strstr(s1,s2)>=0)
        printf("Found");
    else
        printf("Not found");
    return 0;
}
