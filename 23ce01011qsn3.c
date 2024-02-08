#include<stdio.h>
int main()
{
    int x,y;
    printf("current balance:");
    scanf("%d",&x);

    printf("credit score:");
    scanf("%d",&y);

    switch(y<600? 1 : 600<y && y<750? 2 : 3)
    {
        case 1:
        printf("calculated interest=%d",x*15/100);
        break;
        case 2:
        printf("calculated interest=%d",x*12/100);
        break;
        case 3:
        printf("calculated interest=%d",x*10/100);
        break;
    }
    return 0;
}
