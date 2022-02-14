/* WAP to input any number and print its reverse */

#include<stdio.h>

void main()
{
    long num,rev;
    int rem;

    printf("\n Enter any number : ");
    scanf("%ld",&num);

    rev = 0;
    while(num>0)
    {
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    printf("\n Reverse of the number : %ld",rev);
}