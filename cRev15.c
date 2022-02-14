/* WAP to input two string values. perform swapping */

#include<stdio.h>
#include<string.h>

void main()
{
    char str1[50],str2[50],t[50];

    printf("\n Enter string1 : ");
    gets(str1);

    printf("\n Enter string2 : ");
    gets(str2);

    printf("\n Before Swapping - ");
    printf("\n string 1 : %s string 2 : %s",str1,str2);

    strcpy(t,str1);
    strcpy(str1,str2);
    strcpy(str2,t);

    printf("\n After Swapping - ");
    printf("\n string 1 : %s string 2 : %s",str1,str2);
}