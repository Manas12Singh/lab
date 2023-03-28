#include <stdio.h>

int main()
{
    char s1[200];
    gets(s1);
    char* s=s1;
    while(*s!='\0')
    {
        if(*s==' ')
        {
            s++;
            break;
        }
        s++;
    }
    puts(s);
}
