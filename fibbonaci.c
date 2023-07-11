//fibbonaci series
#include<stdio.h>
int main()
{
    int n,t1=0,t2=1,nextterm;
    printf("enter the range in fibbonaci to be printed");
    scanf("%d",&n);
    printf("the fibbonaci series are%d%d",t1,t2);
       for(int i=1;i<n;i++){
    nextterm=t1+t2;
    printf("%d",nextterm);
    t1=t2;
    t2=nextterm;

    }
}
