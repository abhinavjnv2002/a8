#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x%400==0)
        printf("%d is a leap year.",x);
    else if(x%100==0)
        printf("%d is not a leap year.",x);
    else if(x%4==0)
       printf("%d is a leap year.",x);
    else
        printf("%d is not a leap year.",x);

    getch();
}
