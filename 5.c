// SALE
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int books;
    printf("Enter the number of books : ");
    scanf("%d", &books);
    if(books<=10000)
    {
        printf("no discount\n");
        printf("the total cost of books is : %d\n", (books*10));
    }
    else if(books>10000 && books<=15000)
    {
        printf("Hey !! you got 10 percent discount\n");
        printf("the total cost of books is : %d\n", ((books*10)-0.1*(books*10)));
    }
    else if(books>15000 && books<=20000)
    {
        printf("Hey !! you got 20 percent discount\n");
        printf("the total cost of books is : %d\n", ((books*10)-0.2*(books*10)));
    }
    return 0;
}