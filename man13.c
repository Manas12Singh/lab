#include<stdio.h>

int main()
{
    char s1[100];
    gets(s1);
    int i=0,flag=1;
    while(s1[i]!='\0')
    {
        if(s1[i]==s1[i+1])
        {
            flag=0;
            break;
        }
        i+=2;
    }
    if(flag)
        puts("yes");
    else
        puts("no");
    return 0;
}
