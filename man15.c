#include <stdio.h>
#include <string.h>

int compare(char* s1,char* s2)
{
    int l1=strlen(s1),l2=strlen(s2);
    if(l1!=l2)
        return 0;
    int i=0;
    while(*(s1+i)!='\0')
    {
        if(*(s1+i)!=*(s2+i))
            return 0;
        i++;
    }
    return 1;
    
}

int main()
{
    char s1[200],s2[200];
    gets(s1);
    gets(s2);
    char* s=s1;
    char* t=s2;
    int f=compare(s,t);
    if(f)
        puts("Same");
    else
        puts("Different");
}

