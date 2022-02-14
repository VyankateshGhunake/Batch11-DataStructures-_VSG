/* Ass: WAP to replace first digit with last digit in 5 digit integer number.
   In case of same digits replace with its square */

#include<stdio.h>

void main()
{
    long num;
    int rem,i,arr[5];

    printf("\n Enter any five digit number : ");
    scanf("%ld",&num);//12345

    for(i=0;i<5;i++)
    {
        rem = num%10;
        arr[i] = rem;
        num = num/10;
    }//54321

    if(arr[4]==arr[0])
    {
        arr[4] = arr[0]*arr[0];
    }
    else
    {
        arr[4] = arr[0];
    }
    printf("\n After replacing : ");
    for(i=4;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
}