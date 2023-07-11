//factorial of a number
#include<stdio.h>
int factorial(int n){
    int i,fact=1;
    if(n==0){
        return 1;
    }
    for(i=2;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
 int main()
 {
    int n,result;
    printf("enter the positive nos");
    scanf("%d",&n);
    result=factorial(n);
    printf("the factorial is=%d",result);

 }
