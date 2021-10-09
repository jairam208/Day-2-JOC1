// LARGEST OF TWO NUMBERS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, larger, largest;
    printf("Enter the two numbers : ");
    scanf("%d %d", &num1, &num2);
    if(num1<0||num2<0)
    {
        printf("invalid number in input\n");
    }
    else
    {
        larger = (num1>num2) ? num1 : num2;    
        printf("the larger of the two number is = %d\n", larger);
        printf("enter the third number : ");
        scanf("%d", &num3);
    }
    if(num3<0)
    {
        printf("invalid number in input\n");
        exit(0);
    }
    largest = (larger>num3) ? larger : num3;
    printf("the largest of the three numbers is = %d\n", largest);
    return 0;
}