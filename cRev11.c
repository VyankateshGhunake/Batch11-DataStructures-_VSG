/* WAP to create and show String */ 
// scanf() terminates string after first space.

#include<stdio.h>

void main()
{
    char str[50];
    printf("\n Enter any string : ");
    scanf("%s",&str);

    printf("\n Your string was : %s",str);

    fflush(stdin);   // clear buffer memory

    printf("\n Enter any string : ");
    gets(str);

    printf("\n Your string was : %s",str);
}