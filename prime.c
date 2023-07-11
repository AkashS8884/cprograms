#include <stdio.h>
#include<math.h>
int prime(int n){
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}

int main() {
    int n=9;
    if(prime(n))
        printf("It is a prime number");
    else
        printf("It is not a prime number");
    return 0;
}