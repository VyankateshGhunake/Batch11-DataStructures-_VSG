/* WAP to calculate and show area of different shapes. define function to return answers */

#include<stdio.h>

float calcAreaC(float rad);
float calcAreaT(float bs,float ht);
void calcAreaS(float side);

void main()
{
	float rad,base,height;
	float ans;
	
	printf("\n Enter Radius :");
	scanf("%f",&rad);
	
	ans = calcAreaC(rad);
	printf("\n Area of Circle with radius %.2f = %.2f",rad,ans);
	
	base=4.5f;
	height=1.2f;
	
	ans = calcAreaT(base,height);
	printf("\n Area of Triangle with base %.2f and height %.2f = %.2f",base,height,ans);
	
	calcAreaS(4.0f);
}


	float calcAreaC(float rad)
	{
		float area;
		area = 3.14f*rad*rad;
		
		return area;
	}
	
	float calcAreaT(float bs,float ht)
	{
		return (0.5f*bs*ht);
	}
	
	void calcAreaS(float s)
	{
		printf("\n Area of Square with side %.2f = %.2f",s,s*s);
	}