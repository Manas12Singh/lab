//accept string from user. udf to display the frequency of vowels and spaces
#include <stdio.h>

void check(char s1[])
{
    int i=0,vowel=0,space=0;
    while(s1[i]!='\0')
    {
        switch(s1[i])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowel++;
                break;
            case ' ':
                space++;
        }
        i++;
    }
    printf("Vowel: %d\nSpace: %d\n",vowel,space);
}

int main()
{
    char s1[100];
    gets(s1);
    check(s1);
}
