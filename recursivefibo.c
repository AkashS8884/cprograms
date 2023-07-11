#include<stdio.h>
void printfibo(int n,int t1,int t2){
    int nextterm;
    if(n>0){
        nextterm=t1 + t2;
        t1=t2;
        t2=nextterm;
        printf("%d",nextterm);
        printfibo(n-1,t1,t2);
    }
}
int main()
{
    int n,t1=0,t2=1;
    printf("enter the fibbo range");
    scanf("%d",&n);
    printf("the fibbo series are%d%d",t1,t2);
    printfibo(n-1,t1,t2);
}
//trace the given function