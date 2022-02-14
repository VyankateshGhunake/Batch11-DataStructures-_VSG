/* WAP to demonstrate Function by showing greeting Message */

#include<stdio.h>

void show();
void display(char msg[]);
void main()
{
    show();
    show();
    display("Hii Windows..!");
    display("Hii, I am Vyankatesh..!");
}

    void show()
    {
        printf("\n Hello, Welcome to WCE..!");
    }

    void display(char msg[])
    {
        printf("\n %s",msg);
    }