#include<stdio.h>
int main()
{
    int a,b,x;
    printf("enter a,b:");
    scanf("%d %d",&a,&b);

    printf("1 is for addition \n");
    printf("2 is for subtraction \n");
    printf("3 is for multiplication \n");
    printf("4 is for division \n");

    int n;
    printf("enter n:");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
        x=a+b;
        printf("%d",x);
        break;

        case 2:
        x=a-b;
        printf("%d",x);
        break;

        case 3:
        x=a*b;
        printf("%d",x);
        break;

        case 4:
        x=a/b;
        printf("%d",x);
        break;

        default:
        printf("wrong input");
    }
    return 0;

}