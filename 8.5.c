#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if(c>'A'&&c<'Z')
        printf("%d is uppercase.",c);
    else if(c>'a'&&c<'z')
        printf("%d is lowercase.",c);
    else if(c>='0'&&c<='9')
        printf("%d is a digit.",c);
    else
        printf("special character.");
    getch();
}
