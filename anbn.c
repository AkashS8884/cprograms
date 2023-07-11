#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char ch;
printf("Enter the Characters\n");
ch=getchar();
if(ch=='a')
goto s1;
else if(ch=='.')
goto s11;
else
goto s10;

s1:ch=getchar();
   if(ch=='a')
   goto s1;
   else if(ch=='(')
   goto s2;
   else if(ch=='.')
   goto s11;
   else
   goto s10;

s2:ch=getchar();
    if(ch=='b')
    goto s3;
    else if(ch=='.')
    goto s11;
    else
    goto s10;

s3:ch=getchar();
      if(ch=='b')
        goto s3;
      else if(ch=='\n')
    {
        printf("ok");
    }         
     else if(".")
     goto s11;
     else
     goto s10;

     s10:printf("error\n");
         exit(0);

     s11:printf("terminated\n");
         exit(0);    
}