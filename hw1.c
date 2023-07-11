//code to convert decimal to binary
//check whether the no is prime or not
//trace the fibbonaci program
//1)program to convert decimal to binary
#include<stdio.h>
int main()
{
    int a[25],n,i;
    printf("enter the number");
    scanf("%d",&n);
    int onum=n;
    while(n!=0){
        a[i]=n%2;
        n=n/2;
        i=i+1;
    }
    printf("the binary equivalent to %d\n",onum);
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }

}