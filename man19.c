//wacp to read a string, read another string and check wether second string is present in a string.

#include<stdio.h>

int main()
{
    char s1[200],s2[200];
    char *s3,*s4;
    int flag=0,i=0,j;
    s3=s1;
    s4=s2;
    gets(s1);
    gets(s2);
    while(*(s3+i)!='\0')
    {
        j=0;
        while(*(s3+i+j)==*(s4+j) && *(s3+i+j)!='\0' && *(s4+j)!='\0')
            j++;
        if(*(s4+j)=='\0')
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1)
        printf("Found");
    else
        printf("Not found");
    return 0;
}
