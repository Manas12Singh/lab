
#include <stdio.h>

int main()
{
    char s1[200],s2[200];
    gets(s1);
    gets(s2);
    int i=0,flag=1;
		while(s1[i]!='\0' && s2[i]!='\0')
		{
		    if(s1[i]!=s2[i])
		    {
		        flag=0;
		        break;
		    }
		    i++;
		}
	if(flag)
	puts("Same");
	else
		puts("Different");
    return 0;
}

