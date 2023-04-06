/*
Develop a C program to reverse a string using pointers. Display the reversed string to the console.
Sample:
Input: matrix
Output:
xirtam
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[200];
    char *p1 = s1, temp, *p2;
    gets(s1);
    p2 = p1 + strlen(s1) - 1;
    while (p1 < p2)
    {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++, p2--;
    }
    puts(s1);
    return 0;
}

/*
matrix
xirtam
*/
