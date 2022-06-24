#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,D;
    printf("Enter the value of a,b and c for equation ax^2+bx+c=0: ");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    if (D>0)
        printf("two distict roots");
    else if (D=0)
        printf("equal roots");
    else
        printf("no real roots");
    getch();
}
