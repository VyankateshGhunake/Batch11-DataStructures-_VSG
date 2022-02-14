/* WAP to print second smallest value from array */

#include<stdio.h>

void main()
{
    int min,i,smin,pos=0;
    int arr[5] = {15,96,151,411,55};

    printf("\n Given Array : ");
    for(i=0;i<5;i++)
    printf(" %d",arr[i]);

    min = arr[0];
    for(i=0;i<5;i++)
    {
        if(min>arr[i])
        {    
            min = arr[i];
            pos = i;
        }
    }

    if(min==arr[0])
    smin = arr[1];
    else 
    smin = arr[0];

    for(i=0;i<5;i++)
    {
        if(smin>arr[i] && i!=pos)
        smin = arr[i];
    }
    printf("\n Second minimum : %d",smin);
}