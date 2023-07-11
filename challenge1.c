//you would be given a binary number convert the binary no to decimal and apply the following rules until the no becomes 0
//rule1:if the no is odd subtract the no by 1
//rule2:if the number is even divide the no by 2
#include<stdio.h>
int main()
{
    int n,dec=0,rem,base=1,count=0;
    printf("enter the no\n");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        dec=dec+rem*base;
        base=base*2;
        n=n/10;
    }
    printf("the decimal is%d\n",dec);
    while(dec!=0){
        if(dec % 2 == 0)
        {
            dec=dec/2;
            
            count++;
        }
        else
        {
            dec=dec-1;
        count++;
        }
    }
    printf("%d\n",count);

}