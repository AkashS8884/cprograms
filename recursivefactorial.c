//recursive factorial programme
#include<stdio.h>
int factorial(int n){
    if(n==0){
        return 1;
    }
 return n * factorial(n-1);
}

int main()
{
    int n,res;
    printf("enter the number");
    scanf("%d",&n);
    res=factorial(n);
    printf("the factorial is%d",res);

}
//recursion is preffered to reduce time complexity
