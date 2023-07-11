//program to check prime number or not
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d is not a prime no",n);
        }
        else
        {
            printf("the given no is prime");
        
        }
    }
}
