/*
Develop a C program to find the number of occurrences of each alphabet in a string accepted from the user and display the same to the output screen. Assume that the string contains only alphabets.
Input:
Enter the string: earthly world
Output:
e- 1 
a- 1 
r- 2 
t- 1
h- 1
l- 2
y- 1
w- 1
o- 1
d- 1
*/
#include <stdio.h>
int main()
{
    char s1[200], ch;
    int f, i = 0, j, k;
    puts("Enter the string: ");
    gets(s1);
    while (s1[i] != '\0')
    {
        ch = s1[i];
        if(ch==' ')
        {
            i++;
            continue;
        }
        j = i + 1, k = 0, f = 1;
        while (s1[j] != '\0')
        {
            s1[j] = s1[k + j];
            if (s1[j] == ch)
                k++, f++;
            else
                j++;
        }
        printf("%c- %d\n", ch, f);
        i++;
    }
    return 0;
}
/*
Enter the string: 
earthly world
e- 1
a- 1
r- 2
t- 1
h- 1
l- 2
y- 1
w- 1
o- 1
d- 1
*/