#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
  int a[10],key,n,i,j,sum;
  printf("enter the no of elemenets");
  scanf("%d",&n);
  printf("enter the elements");
  for( i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("enter the key");
  scanf("%d",&key);
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
         sum=a[i]+a[j];
        if(sum==key && i!=j)
  {
    printf("correct");
    exit(0);
  }
}

  }
  printf("not found");
  return 0;
}

  
