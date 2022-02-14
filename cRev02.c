/* A certain town has population 80000 , From Them 67% are men. Total 81% are literate Men,
   Illeteracy of women is 24%. Comput and show how many are Men and Women, How many are literate
   and Illeterate Men and Women in the town */

#include<stdio.h>

void main()
{
    long men,women,lmen,lwomen,ilmen,ilwomen,pop=80000;

    men = 0.67*80000;
    women = 80000 - men;
    lmen = 0.81*men;
    ilwomen = 0.24*women;
    lwomen = women - ilwomen;
    ilmen = men - lmen;

    printf("\n Population : %ld",pop);
    printf("\n Total Men : %ld",men);
    printf("\n Total Women : %ld",women);
    printf("\n Total Literate Men : %ld",lmen);
    printf("\n Total Literate Women : %ld",lwomen);
    printf("\n Total Illiterate Men : %ld",ilmen);
    printf("\n Total Illiterate Women : %ld",ilwomen);
}