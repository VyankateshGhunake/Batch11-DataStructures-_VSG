/* WAP to input 3 numbers and print which is max without "else if" */

#include<stdio.h>

void main()
{
    int a,b,c;
    printf("\n Enter any three numbers : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        printf("\n %d is greater than all the numbers..!",a);
        else
        printf("\n %d is greater than all the numbers..!",c);
    }
    else
    {
        if(b>c)
        printf("\n %d is greater than all the numbers..!",b);
        else
        printf("\n %d is greater than all the numbers..!",c);
    }
}