/*
Develop a C program to Concatenate Two Strings and display the concatenated string to the output screen.
Sample:
Input:
Input string1: Good (Space is typed after Good)
Input string2: Afternoon
Output: Good Afternoon
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[200], s2[200];
    int i, j = 0;
    printf("Input string1: ");
    gets(s1);
    printf("Input string2: ");
    gets(s2);
    i = strlen(s1);
    while (s2[j] != '\0')
    {
        s1[i + j] = s2[j];
        j++;
    }
    s1[i + j] = '\0';
    puts(s1);
    return 0;
}

/*
Input string1: Good
Input string2: Afternoon
Good Afternoon
*/