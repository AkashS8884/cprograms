
#include <stdio.h>
#include<stdlib.h>
int main()
{
    char x;
    s0:
    x=getchar();
    if (x=='1')
    {
        goto s2;
       
    }
    else{
        if(x=='b')
        {
            goto s4;
             
        }
        else{
             if(x=='!'||x=='@'||x=='$'||x=='%'||x=='&')
        {   
            printf("error\n");
            goto s0;
        }
        else{
            if(x=='.')
            {
                goto s1;
            }
            else{
               goto s0;
            }
        }
    
        }
    }    
        
    s1:
    {
        exit(0);
    }
    s2:
     x=getchar();
    if (x=='1')
    {
        printf("ok");
        goto s3;
         
    }
    else{
        if(x=='b')
        {
            goto s4;
             
        }
        else{
             if(x=='!'||x=='@'||x=='$'||x=='%'||x=='&')
        {    printf("error\n");
            goto s0;
        }
        else{
            if(x=='.')
            {
                goto s1;
            }
            else
            {
               goto s0;
            }
        }
        }
        
    }
s3:
 x=getchar();

    if (x=='1')
    {
        printf("ok");
        goto s3;
         
    }
    else{
        if(x=='b')
        {
            goto s4;
             
        }
        else{
             if(x=='!'||x=='@'||x=='$'||x=='%'||x=='&')
        {    printf("error\n");
            goto s0;
        }
        else{
            if(x=='.')
            {
             goto s1;
            }
            else
            {
               goto s0;
            
            }
            }
        }
    }
s4:
     x=getchar();
    if (x=='1')
    {
        goto s2;
         
    }
    else{
        if(x=='b')
        {
            goto s5;
            
        }
        else{
            if(x=='!'||x=='@'||x=='$'||x=='%'||x=='&')
        {    printf("error\n");
            goto s0;
        }
        else{
            if(x=='.')
            {
                goto s1;
            }
            else
            {
               goto s0;
            }
        }
        }
    }
    
    s5:
    
     x=getchar();
    if (x=='1')
    {
        goto s2;
         
    }
    else{
        if(x=='#')
        {
            goto s6;
             
        }
        else{
             if(x=='!'||x=='@'||x=='$'||x=='%'||x=='&')
        {    printf("error\n");
            goto s0;
        }
        else{
            if(x=='.')
            {
                goto s1;
            }
            else
            {
               goto s0;
            }
        }
        }
    }
    s6:
    x=getchar();
    if (x=='1')
    {
        goto s2;
        
    }
    else{
        if(x==';')
        {
            printf("spl key\n");
            goto s0;
            
        }
        else{
             if(x=='!'||x=='@'||x=='$'||x=='%'||x=='&')
        {    printf("error");
            goto s0;
        }
        else{
            if(x=='.')
            {
                goto s1;
            }
            else
            {
               goto s0;
            }
        }
        }
    }


    
    
    
    
    
    
    return 0;
        
}

