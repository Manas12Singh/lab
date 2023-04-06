#include <stdio.h>
#include <string.h>

int main()
{
    char s1[200];
    gets(s1);
    int i=0,j,k,f;
    int l=strlen(s1);
    char *s2="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    while(s2[i]!='\0')
    {
        j=0,f=0,k=-1;
        while(s1[j]!='\0')
        {
            if(s1[j]==s2[i])
            {
                if(k==-1)
                    k=j;
                f++;
            }
            j++;
        }
        if(f>1)
        {
            while(s1[k]!='\0')
            {
                s1[k]=s1[k+1];
                k++;
            }
        }
        i++;
    }
    puts(s1);
}
