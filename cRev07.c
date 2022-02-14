//swapping of last five values from array x and array y

#include<stdio.h>

void main()
{
    int i,temp;
    int x[10] = {1,2,3,4,5,6,7,8,9,10};
    int y[10] = {11,12,13,14,15,16,17,18,19,20};

    printf("\n First Array - ");
    for(i=0;i<10;i++)
    printf(" %d",x[i]);

    printf("\n Second Array - ");
    for(i=0;i<10;i++)
    printf(" %d",y[i]);

    for(i=5;i<10;i++)
    {
        temp = x[i];
        x[i] = y[i];
        y[i] = temp;
    }

    printf("\n\n After Swapping of last five values - ");

    printf("\n First Array - ");
    for(i=0;i<10;i++)
    printf(" %d",x[i]);

    printf("\n Second Array - ");
    for(i=0;i<10;i++)
    printf(" %d",y[i]);
}