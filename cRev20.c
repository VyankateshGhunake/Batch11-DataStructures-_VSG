/* WAP to create structure Student. add and show two student details */

#include<stdio.h>

    struct Student
    {
        int rollNum;
        char name[20];
        float pert;
    };
int main()
{
    struct Student s1,s2;

    printf("\n Enter the Roll Number : ");
    scanf("%d",&s1.rollNum);
    printf("\n Enter the Name : ");
    scanf("%s",&s1.name);
    printf("\n Enter the Percentage : ");
    scanf("%f",&s1.pert);

    printf("\n Enter the Roll Number : ");
    scanf("%d",&s2.rollNum);
    printf("\n Enter the Name : ");
    scanf("%s",&s2.name);
    printf("\n Enter the Percentage : ");
    scanf("%f",&s2.pert);

    if(s1.pert>s2.pert)
    printf("\n %s has more Percentage than %s..!",s1.name,s2.name);
    else
    printf("\n %s has more Percentage than %s..!",s2.name,s1.name);
}