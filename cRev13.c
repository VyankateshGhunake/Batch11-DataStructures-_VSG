/* WAP to input any String and show its Reverse */

#include<stdio.h>
#include<string.h>

void main()
{
    char str[50];

    printf("\n Enter any String : ");
    gets(str);

    strrev(str);
    printf("\n Reversed String : %s",str);
}