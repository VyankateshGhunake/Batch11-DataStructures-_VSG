/* Operators */

#include<stdio.h>

void main()
{
	int a, b, ans;
	
	//Q1.
	a=4;
	b=8;
	
	ans = a%b*2 / 7*b%a;
	
	printf("\n a = %d \t b = %d \t ans = %d",a,b,ans);
	
	//Q2.
	a=90;
	b=100;
	
	a+=10;
	b-=a;
	
	ans = a+b;
	printf("\n a = %d \t b = %d \t ans = %d",a,b,ans);
	
	//Q3.
	
	a=99;
	b=999;
	
	a+=5; //104
	b-=a-10; //905
	
	ans = b/a*10;
	printf("\n a = %d \t b = %d \t ans = %d",a,b,ans);
	
	
	//Q4.
	a=9;
	b=-1;
	
	ans = (a>b) == (b!=0);
	printf("\n a = %d \t b = %d \t ans = %d",a,b,ans);
	
	//Q5.
	a=5;
	b=!a; //0
	
	ans = !a+(b!=a) - !b;
	    
	printf("\n a = %d \t b = %d \t ans = %d",a,b,ans);
}