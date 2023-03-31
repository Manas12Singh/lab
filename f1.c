/*
Develop a C program to copy a string to another without using the inbuilt strcpy function.
Sample:
Input:
Enter a String: Graphic Era Hill University
Output:
Original String: Graphic Era Hill University
Copied String: Graphic Era Hill University
*/

#include <stdio.h>
int main()
{
    char s1[200], s2[200];
    int i = 0;
    printf("Enter a String: ");
    gets(s1);
    while (s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    printf("Original String: %s\n", s1);
    printf("Copied String: %s\n", s2);
    return 0;
}

/*
Enter a String: Graphic Era Hill University
Original String: Graphic Era Hill University
Copied String: Graphic Era Hill University
*/