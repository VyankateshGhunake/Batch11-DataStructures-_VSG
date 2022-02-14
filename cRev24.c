/* WAP to read Student Rollno, name and 3 Semister Percentage. Show Details of Student using function */

#include<stdio.h>

void show(int rollNum,char name[],float s1,float s2,float s3);
void main()
{
    int rollNum;
    char name[20];
    float s1,s2,s3;

    printf("\n Enter rollnumber : ");
    scanf("%d",&rollNum);
    printf("\n Enter the name : ");
    scanf("%s",&name);
    printf("\n Enter 3 semister percentages : ");
    scanf("%f%f%f",&s1,&s2,&s3);

    show(rollNum,name,s1,s2,s3);
    show(105,"Vyankatesh",85.6f,87.2f,92);
}
    void show(int rollNum,char name[],float s1,float s2,float s3)
    {
        printf("\n\n Roll Number = %d",rollNum);
        printf("\n Name : %s",name);
        printf("\n Sem1 = %f Sem2 = %f Sem3 = %f",s1,s2,s3);
    }