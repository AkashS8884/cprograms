//sum of digits of a given no
#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("enter the no\n");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}