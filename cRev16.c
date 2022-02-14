/* WAP to input fname, mname, lname and perform string concatenation to print fullname of person */

#include<stdio.h>
#include<string.h>

void main()
{
    char fname[25],mname[25],lname[25],fullName[100];

    printf("\n Enter your first name : ");
    gets(fname);

    printf("\n Enter your middle name : ");
    gets(mname);

    printf("\n Enter your last name : ");
    gets(lname);

    strcpy(fullName,fname);
    strcat(fullName," ");
    strcat(fullName,mname);
    strcat(fullName," ");
    strcat(fullName,lname);

    printf("\n Full Name : %s",fullName);
}