// searching array value

#include<stdio.h>
    int search(int y[],int user_value)
        {
            int i;
            for(i=0;i<5;i++)
            {
                if(y[i]==user_value)
                {
                    return i;
                }
            }
            return -1;
        }

void main()
{
	int arr[5] = {15,54,87,21,54};
	int user_value,pos;  //74

    printf("\n Enter the number to search : ");
    scanf("%d",&user_value);
		
	pos = search(arr,user_value);
		
	if(pos==-1)
		printf("\n Not Found");
	else
		printf("\n %d Found at index no %d",user_value,pos);
	}