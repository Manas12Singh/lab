#include <stdio.h>

int main()
{
    char s1[200];
    int i=0,f=1,j,k;
    gets(s1);
    while(s1[i]!='\0')
    {
        j=i+1;
        f=1;
        while(s1[j]!='\0')
        {
            if(s1[j]==s1[i])
            {
                f++;
                k=j;
                while(s1[k]!='\0')
                    s1[k]=s1[k+1],k++;
            }
            if(s1[j]==s1[i]) j--;
            else j++;
        }
        printf("%c: %d\n",s1[i],f);
        i++;
    }
    return 0;
}

