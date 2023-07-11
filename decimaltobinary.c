//program to convert binary to decimal vicaversa
#include<stdio.h>
int main()
{
    int n,sum=0,rem,base=1;
    printf("enter the no");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        sum=sum+rem*base;
        base=base*2;
        n=n/10;

    }
    printf("%d\n",sum);
    return 0;
}
