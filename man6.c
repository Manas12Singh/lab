#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a,const void* b)
{
    return (*(char*)a-*(char*)b);
}

int main()
{
    char s1[200];
    int l=0,i=0,max=0,f=1;
    gets(s1);
    while(s1[l]!='\0') l++;
    qsort(s1,l,sizeof(char),cmp);
    while(s1[i]!='\0')
    {
        if(s1[i]!=s1[i+1])
        {
            //max=(max>f)?max:f;                //max frequency
            //if(s1[i]==' ') printf("Space: %d\n",f);    //Not needed
            printf("%c: %d\n",s1[i],f);         //every frequency
            f=1;
        }
        else
            f++;
        i++;
    }
    puts(s1);
    //printf("%d\n",max);       //max frequency
    return 0;
}

