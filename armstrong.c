#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
    int num,rem,sum=0,ornum;
    printf("enter the number\n");
    scanf("%d",&num);
    ornum=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    if(sum==ornum)
        printf("armnstrong no\n");
    else 
        printf("invalid no\n");

    }
