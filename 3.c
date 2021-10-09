// SIMPLE CALCULATOR
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    int num1, num2, result;
    printf("Enter operators to get the result : ");
    scanf("%c", &op);
    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);
    switch(op)
    {
        case '+':
        result = num1 + num2;
        break;
        case '-':
        result = num1 - num2;
        break;
        case '*':
        result = num1 * num2;
        break;
        case '/':
        {
            if(num2==0)
            {
                printf("divide by zero error\n");
                exit(0);
            }
            else
            {
                result = num1 / num2;
            }
            break;
        }
        case '%':
        result = num1 % num2;
        break;
        default:
        printf("Invalid operator entered\n");
        exit(0);
        break;
    }
    printf("%d %c %d = %d ", num1, op, num2, result);
    return 0;
}