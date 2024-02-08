#include <stdio.h>
int main()
{
    int a,b,c,largest;
    printf("enter a,b,c: \n");
    scanf("%d %d %d",&a,&b,&c);

    switch(a>b && a>c? 1 : b>c && b>a? 2 : 3)
    {
        case 1:
        largest=a;
        break;
        case 2:
        largest=b;
        break;
        case 3:
        largest=c;
        break;
    }
    printf("largest number is %d",largest);
    return 0;
}