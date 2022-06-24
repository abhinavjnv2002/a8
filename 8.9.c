#include<stdio.h>
#include<conio.h>
int main()
{
    int ph,ch,bi,ma,co,per;
    printf("Enter the marks obtained in Physics,Chemistry,Biology,Mathematics,Computer: ");
    scanf("%d%d%d%d%d",&ph,&ch,&bi,&ma,&co);
    per=((ph+ch+bi+ma+co)/5);
    if (per>=90)
        printf("Grade A ");
    else if (per>=80)
        printf("Grade B ");
    else if (per>=70)
        printf("Grade C ");
    else if (per>=60)
        printf("Grade D ");
    else if (per>=40)
        printf("Grade E ");
    else
        printf("Grade F ");

    getch();
}
