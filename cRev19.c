/* WAP to evaluate following expressions */

#include<stdio.h>

int main()
{
	int a,b,ans;
	int *p1,*p2;
	
	//Q1.
	a=1;
	b=10;
	
	p1=&a;
	p2=&b;
	
	ans = a + *p1 / *p2 + b;
	printf("\n\n a = %d \t b = %d \t *p1=%d \t *p2=%d \t ans = %d",a,b,*p1,*p2,ans);


	//Q2.
	a=5;
	while(a<7)
	{
		b=a++;
	}
	
	p1=&a;//7
	p2=&b;//6
	
	while(*p1<10)
	{
		*p2=(*p1)++;// p1 = 10 p2 =9
	}
	
	ans = *p1%a + *p2%b;
	printf("\n\n a = %d \t b = %d \t *p1=%d \t *p2=%d \t ans = %d",a,b,*p1,*p2,ans);

	
	//Q3.
	a=99;
	b=99%999; //99
	
	p1=&a;// 99
	p2=p1;// 99
	
	ans = *p1+10 - 10+*p2;
	printf("\n\n a = %d \t b = %d \t *p1=%d \t *p2=%d \t ans = %d",a,b,*p1,*p2,ans);
	
	
	//Q4.
	a=-5;//0
	b=+5;//5
	
	p1=&a;
	p2=&b;//5
	
	(*p1)+=(*p2);//0
	b+=(*p1);//5
	
	ans = b - b*(*p2) + (*p1)++;
	printf("\n\n a = %d \t b = %d \t *p1=%d \t *p2=%d \t ans = %d",a,b,*p1,*p2,ans);


	//Q5.
	a=8;
	b=a;
	
	p1=&a;
	p2=&b;
	
	p2=p1;
	p1=p2;
	
	ans = (*p1)++ - --(*p2);
	printf("\n\n a = %d \t b = %d \t *p1=%d \t *p2=%d \t ans = %d",a,b,*p1,*p2,ans);

	return 0;
}