//write a program to print all the numbers from the range n1 to n2 which are divisible by 5 using all the three basic loops
#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    int n1,n2,i;
    printf("enter two numbers");
    scanf("%d %d",&n1,&n2);
    if(n1<n2){
    for(i=n1;i<=n2;i++)
    {
        if(i%5==0){
        printf("%d",i);
    }
    }
    }
    i=n1;
    while(i!=n2){
        if(i%5==0){
            printf("%d",i);
            i=i+1;
        }
    }
i=n1;
do{
    if(i%5==0){
        printf("%d",i);
        i=i+1;
    }
}while(i<=n2);
}
