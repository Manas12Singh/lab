#include <stdio.h>
#include <string.h>

int main()
{
    int n,j;
    puts("Number:");
    scanf("%d",&n);
    n++;
    char s1[n][200], s2[200];
    puts("Enter names:");
    for(int i=0;i<n;i++)
        gets(s1[i]);
    puts("Find:");
    gets(s2);
    j=check(
    if(j) puts("Found");
    else puts("Not found");
}

int check(char **s1,char* s2,n)
{
    j=0;
    for(int i=1;i<n;i++)
        {
            if(strcmp(s1[i],s2)==0)
            {
                j=1;
                break;
            }
        }
    return j;
}
