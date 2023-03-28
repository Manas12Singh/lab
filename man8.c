//wacp to enter n names from the usr and take one more string as input from usr which represents a random name. Finbd out  whether that name is present among the array or not

#include <stdio.h>
#include <string.h>

int main()
{
    int n,j=0;
    puts("Number:");
    scanf("%d",&n);
    n++;
    char s1[n][200], s2[200];
    puts("Enter names:");
    for(int i=0;i<n;i++)
        gets(s1[i]);
    puts("Find:");
    gets(s2);
    for(int i=1;i<n;i++)
    {
        if(strcmp(s1[i],s2)==0)
        {
            j=1;
            break;
        }
    }
    if(j) puts("Found");
    else puts("Not found");
}
