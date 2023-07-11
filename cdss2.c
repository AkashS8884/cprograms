#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char ch;
    printf("enter the characters\n");
    ch = getchar();
    if(ch=='a')
       goto s1;
    else if(ch=='.')
            goto s11;
    else
        goto s10;
        
    s1: ch=getchar();
        if(ch=='a')
            goto s1;
        else if(ch=='c')
            goto s2;
        else if(ch=='.')
            goto s11;
        else 
            goto s10;
    s2: ch=getchar();
        if(ch=='b')
            goto s3;
        else if(ch=='.')
            goto s11;
        else 
            goto s10;
    s3: ch=getchar();
        if(ch=='b')
            goto s3;
        else if(ch=='\n')
        {    
            printf("vokkay\n");
            exit(0);
        }
        else if(ch=='.')
            goto s11;
        else 
            goto s10;
    s10: printf("error\n");
        exit(0);
    s11: printf("terminated\n");
        exit(0);

}