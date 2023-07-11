//write a recursive function for printing the nos till the given range
#include<stdio.h>
void printnos(int n){
    if(n>0){
        printf("%d",n);
        printnos(n-1);
    }
}
int main()
{
    printnos(5);
    return 0;
}