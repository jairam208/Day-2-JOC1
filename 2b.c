// EQUALITY CHECK AND GREATEST AMONG THREE NUMBERS
#include<stdio.h>
int main()
{
    int num1, num2, num3, greatest;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1==num2)
    {
        printf("The first and second numbers are equal\n");
        if(num1==num2 && num2==num3)
        {
            printf("All three numbers are equal\n");
        }
    }
    greatest = num1>num2 ? (num1>num3 ? num1 : num3) : (num2>num3 ? num2 : num3);
    printf("The greatest of three numbers is : %d\n", greatest);
    return 0;
}