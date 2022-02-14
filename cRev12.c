/* WAP to input sample string. count and print total number of character, print string in 
   uppercase and in lowercase */

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];
    int n;

    printf("\n Enter any string : ");
    gets(str);

    n = strlen(str);
    printf("\n Total number of characters : %d",n);

    strupr(str);
    printf("\n String in Uppercase : %s",str);

    strlwr(str);
    printf("\n String in Lowercase : %s",str);
}