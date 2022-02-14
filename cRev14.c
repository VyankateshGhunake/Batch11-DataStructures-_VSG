/* WAP to input two string values. check that strings are same or not */

#include<stdio.h>
#include<string.h>

void main()
{
    char str1[50] = "Vyankatesh";
    char str2[50] = "Vyankatesh";

    printf("\n string 1 = %s \n string 2 = %s",str1,str2);

    if(strcmp(str1,str2)==0)
    printf("\n Two strings are Same..!");
    else
    printf("\n Two strings are Distinct..!");
}