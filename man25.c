//wacp to demonstrate the use of realloc() function. 
//Home work//
//wacp to accept n integers from the usr and find the xor of all the array elements. implement it using dma.
//wacp to check whether the given two strings are anagrams of each other or not.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int n;
    int *p;
    p=(int *)realloc(p,3);
    for(int i=0;i<3;i++)
        printf("%d",*(p+i));
}