/* WAP to demonstrate Memory & memory Address */

#include<stdio.h>
void main()
{
    int no;
    float pert;
    char ch;

    no = 10;
    printf("\n Number = %d",no);
    printf("\n Memory Address = %u",&no);

    pert = 25.7f;
    printf("\n Percentage = %f",pert);
    printf("\n Memory Address = %u",&pert);

    ch = 'a';
    printf("\n Character = %c",ch);
    printf("\n Memory Address = %u",&ch);
}