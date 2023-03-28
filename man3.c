#include <stdio.h>

int main()
{
    char s1[200];
    gets(s1);
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        if(s1[i]>='A'&& s1[i]<='Z');
        else if(s1[i]>='a'&& s1[i]<='z');
        else if(s1[i]>='0'&& s1[i]<='9');
        else j++;
        i++;
    }
    printf("%d\n",j);
}
