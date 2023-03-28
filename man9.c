#include <stdio.h>

int main()
{
    int n, j, exist, i;
    puts("Enter the total number of names: ");
    scanf("%d", &n);
    n++;
    char s1[n][200], s2[200];
    puts("Enter the names:");
    for (i = 0; i < n; i++)
        gets(s1[i]);
    puts("Search Name:");
    gets(s2);
    for (i = 1; i < n; i++)
    {
        j = 0, exist = 1;
        while (s1[i][j] != '\0' && s2[j] != '\0')
        {
            if (s1[i][j] != s2[j])
            {
                exist = 0;
                break;
            }
            j++;
        }
        if (exist == 1 && s1[i][j] == '\0' && s2[j] == '\0')
            break;
        else
            exist = 0;
    }
    if (exist == 1)
        printf("%s is found at %d position.", s2, i);
    else
        printf("%s is not found in the list.", s2);
    return 0;
}
