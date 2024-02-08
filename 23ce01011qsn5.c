#include <stdio.h>
int main(){
    int n,sum,rem,p=0;
    printf("Enter any three digit number :\n");
    scanf("%d",&sum);
    n=sum;

    if(n<100 && n>999)
    printf("wrong input");

    while(n>0){
        rem=n%10;
        p=p+rem*rem*rem;
        n=n/10;
    }
    

    

     if (sum==p)
    printf("It is an armstrong number");



    else 
    printf("It is not an armstrong number");
    return 0;

        
    

    
}