//wacp to capitalize the initials of each word present in a given string

#include <stdio.h>

void titleize(char s1[]);

int main()
{
    char s1[200];
    gets(s1);
    titleize(s1);
    puts(s1);
    return 0;
}

void titleize(char s1[])
{
    int i=0,flag=1;
    while(s1[i]!='\0')
    {
        if(flag)
        {
            if(s1[i]>='a' && s1[i]<='z')
                s1[i]-=32;
            flag=0;
        }
        if(s1[i]==' ')
            flag=1;
        i++;
    }
}

