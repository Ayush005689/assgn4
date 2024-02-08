#include<stdio.h>
int main()
{
    int age;
    printf("enter age:");
    scanf("%d",&age);

    switch(age<5? 1 : age>4 && age<13? 2 : age>12 && age<60? 3 : 4)
    {
        case 1:
        printf("ticket price=0");
        break;

        case 2:
        printf("ticket price=20");
        break;

        case 3:
        printf("ticket price=50");
        break;

        case 4:
        printf("ticket price=40");
        break;

        default:
        printf("wrong input");

    }
    return 0;
}