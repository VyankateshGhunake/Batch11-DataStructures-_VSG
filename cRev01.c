/* WAP to input 5 Digit number and replace its 3rd digit with its Square 
  Note: 3rd digit should be >3 */

#include<stdio.h>

void main()
{
    long num;
    int rem;
    printf("\n Enter any five digit number : ");
    scanf("%ld",&num); //12345
    
    rem = (num/100)%10;
    num = (((num/1000)*100)+rem*rem)*100+num%100;

    printf("\n After Replacing : %ld",num);
}