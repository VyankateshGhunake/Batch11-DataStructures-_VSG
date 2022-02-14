/* while and do while */

#include<stdio.h>
void main()
{
    int n;

    printf("\n By using while loop..");
    n=1;
    while(n<=10)
    {
        printf("\n %d",n);
        n++;
    }

    printf("\n By using do while loop..");
    n=1;
    do
    {
        printf("\n %d",n);
        n++;
    }
    while(n<1);
}