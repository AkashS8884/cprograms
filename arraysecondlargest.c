#include<stdio.h>
#include<stdlib.h>
int swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int n,a[10],i,max=1,smax,index=1;
    printf("enter the no of elemenets");
    scanf("%d",&n);
    printf("enter the elements");
    for( i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]>max){
            max=a[i];
            index=i;

        }
    }
    swap(a[index],a[n-1]);
    smax=a[index];
    for(i=0;i<n-1;i++)
    {
       if(a[i]>a[index])
       {
        smax=a[i];
       }
    }
    printf("%d",smax);
    printf("%d",max);
}