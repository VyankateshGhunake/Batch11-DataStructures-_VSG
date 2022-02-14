/* Sorting Array values using Bubble Sort */

#include<stdio.h>

void main()
{
    int i,j,t;
    int arr[5] = {13,96,23,56,77};

    printf("\n Given Array : ");
    for(i=0;i<5;i++)
    printf(" %d",arr[i]);

    for(i=0;i<5;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(arr[j]>arr[j+1])
            {    
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
    printf("\n Sorted Array : ");
    for(i=0;i<5;i++)
    printf(" %d",arr[i]);
}
