/* WAP to print First n Prime numbers */

#include<stdio.h>

void main()
{
    int n,s,d,cnt;
    printf("\n Enter the value of n : ");
    scanf("%d",&n);

    printf("\n First n Prime numbers are -");
    for(s=1;s<=n;s++)
    {
        cnt = 0;
        for(d=1;d<=n;d++)
        {
            if(s%d==0)
            cnt++;
        }
        if(cnt==2)
        printf("  %d",s);
    }
}