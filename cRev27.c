/* WAP to input two numbers. perform swapping using function */ 
// Reference Arguments 

#include<stdio.h>

    void swap(int *x,int *y)
    {
        int t;
        t = *x;
        *x = *y;
        *y = t;
    }
void main()
{
    int a,b;

    printf("\n Enter any two numbers : ");
    scanf("%d%d",&a,&b);

    printf("\n Before Swapping : a = %d b = %d",a,b);
   
    swap(&a,&b);

    printf("\n After Swapping : a = %d b = %d",a,b);
}