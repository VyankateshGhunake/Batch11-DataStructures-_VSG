/* Sorting Array values using Selection Sort */

#include<stdio.h>

void main()
{
    int arr[5] = {12,198,56,23,65};
    int i,si,ci,t;

    printf("\n Given Array : ");
    for(i=0;i<5;i++)
    printf(" %d",arr[i]);

    for(si=0;si<5;si++)
    {
        for(ci=si+1;ci<5;ci++)
        {
            if(arr[si]>arr[ci])
            {
                t = arr[si];
                arr[si] = arr[ci];
                arr[ci] = t;
            }
        }
    }
    printf("\n Sorted Array : ");
    for(i=0;i<5;i++)
    printf(" %d",arr[i]);
}