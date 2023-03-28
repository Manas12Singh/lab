#include <stdio.h>
#include <string.h>

void reverse(char* s)
{
    char temp;
    int n=strlen(s);
    for(int i=0;i<n/2;i++)
        temp=*(s+i),
        *(s+i)=*(s+n-i-1),
        *(s+n-i-1)=temp;
}

int main()
{
    char s1[200];
    gets(s1);
    char* s=s1;
    reverse(s);
    puts(s);
}
