#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the month number: ");
    scanf("%d",&a);
    if(a=(1,3,5,7,8,10,12))
        printf("31 days");
    else if (a=(4,6,9,11))
        printf("30 days");
    else
        printf("28 or 29(for leap year)");
    getch();
}
