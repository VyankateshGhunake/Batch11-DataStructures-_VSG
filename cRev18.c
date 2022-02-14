/* Syntax & Rules of Pointer */

#include<stdio.h>

void main()
{
    int no;
    int *x;

    no =100;

    printf("\n no = %d",no);
    printf("\n Memory Address of no : %u",&no);

    x = &no;

    printf("\n x = %d",*x);
    printf("\n Memory Address of *x : %u",x);

    no = 1000;
    printf("\n no = %d *x = %d",no,*x);

    *x = 900;
    printf("\n no = %d *x = %d",no,*x);
}