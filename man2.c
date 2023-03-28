//replace space with hash(#) charcter
#include <stdio.h>

int main()
{
    char s1[200];
    gets(s1);
    int i=0;
	while(s1[i]!='\0')
	{
	    if(s1[i]==' ')
	        s1[i]='#';
	    i++;
	}
	puts(s1);
    return 0;
}

