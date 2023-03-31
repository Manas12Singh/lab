/*
Develop a C program to compare two strings using a function and return 1 if the strings are equal and 0 otherwise without using strcmp( ) function. Display the appropriate message to the output screen.
Input:
Enter two strings: Hello
hello
Output:
The Strings are not equal.
*/

#include <stdio.h>
#include <string.h>
int compare(char s1[], char s2[]);
int main()
{
    char s1[200], s2[200];
    int n;
    puts("Enter two strings: ");
    gets(s1);
    gets(s2);
    n = compare(s1, s2);
    if (n == 1)
        puts("The Strings are equal.");
    else
        puts("The Strings are not equal.");
    return 0;
}
int compare(char s1[], char s2[])
{
    int i = 0;
    int l1 = strlen(s1), l2 = strlen(s2);
    if (l1 != l2)
        return 0;
    while (s1[i]!='\0')
    {
        if(s1[i]!=s2[i])
            return 0;
        i++;
    }
    return 1;
}

/*
Enter two strings: 
Hello
hello
The Strings are not equal.
*/