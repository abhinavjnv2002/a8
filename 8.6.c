#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the length of all three sides: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<(b+c)||b<(a+c)||c<(a+b))
        printf("It is sides of the traingle");
    else
        printf("It is not sides of the traingle");
    getch();
}
