/* WAP to define functions to convert length units */

#include<stdio.h>

long toMeter(int distance)
{
	return distance*1000;	
}

long toCentimeter(int distance)
{
	return distance*100000;	
}

float toInches(int distance)
{
	return toCentimeter(distance)/2.54;
}

float toFeet(int distance)
{
	return toInches(distance)/12.0;
}

void main()
{
	int km;
	long meter,cm;
	float inch,feet;
	
	printf("\n Enter distace in Km :");
	scanf("%d",&km);
	
	meter = toMeter(km);
	printf("\n In Meter=  %ld",meter);
	
	cm = toCentimeter(km);
	printf("\n In Centimeter = %ld",cm);
	
	inch = toInches(km);
	printf("\n In Inches = %.2f",inch);
	
	feet = toFeet(km);
	printf("\n In Feet = %.2f",feet);
}