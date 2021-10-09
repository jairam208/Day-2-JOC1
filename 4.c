// CET RANK CUT-OFF AT RNSIT
#include<stdio.h>
int main()
{
    long int rank;
    printf("Enter a rank : ");
    scanf("%ld", &rank);
    if(rank<=3250)
    {
        printf("he will get in all branches\n");
    }
    else if(rank>3250 && rank<=6505)
    {
        printf("he will get admission in ISE, EandC and MEC\n");
    }
    else if(rank>6505 && rank<=12012)
    {
        printf("he will get admission in EandC and MEC\n");
    }
    else if(rank>12012 && rank<=22340)
    {
        printf("he will get admission in MEC\n");
    }
    else
    {
        printf("admission not possible at RNSIT\n");
    }
    return 0;
}