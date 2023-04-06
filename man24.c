//wacp to allcate memory dynamically for an array of n integers. You need to find the largest in the array.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,max;
    scanf("%d",&n);
    //int *arr=(int *)malloc(n*sizeof(int));
    int *arr=calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",arr+i);
    //for(i=0;i<n;i++)
      //  printf("%d",arr[i]);
    max=*arr;
    for(i=1;i<n;i++)
        if(*(arr+i)>max)
            max=*(arr+i);
    printf("%d\n",max);
    free(arr);
}