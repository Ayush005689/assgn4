#include<stdio.h>
int main()
{
    int a;
    printf("\n enter the integer:");
    scanf("%d",&a);

    switch (a%2)
    {
    case 0:
    printf("the integer is even");
        break;
    case 1:
    printf("the integer is odd");
        break;

    
    default:
    printf("invalid input");

        break;
    }
    return 0;
}