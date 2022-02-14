/* WAP to input array of 5 Integers. Define function to show Array values */

#include<stdio.h>

void showArray(int y[])
{
	int i;
	for(i=0;i<5;i++)
	printf("\t %d",y[i]);
}

void main()
{
	int arr[5];
	int i;
	
	printf("\n Enter 5 Array values :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);  
	}
	
	showArray(arr);
	
	printf("\n Array 4th element = %d",arr[3]);
}