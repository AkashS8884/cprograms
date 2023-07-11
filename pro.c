#include<stdio.h>
#include<stdlib.h>

int main()
{
        char x;
        printf("Enter any character");
        while(1)
        {
        s0:
                x=getchar();
                if(x=='1')
                  goto s2;
                else if(x=='.')
                  goto s1;
                else if(x=='!'||x=='@'||x=='$'||x=='&'||x=='%')
                {
                printf("Error");
                  goto s0;
                }
                else if (x=='b')
                  goto s2;
                else
                  goto s0;

        s1:
                exit(0);
          s2:
                x=getchar();
                if(x=='1')
                {
                        printf("ok");
                          goto s2;
                }
                else if(x=='.')
                  goto s1;
                else if(x=='!'||x=='@'||x=='$'||x=='&'||x=='%')
                        {
                        printf("Error");
                  goto s0;
                        }
                else if(x=='b')
                        goto s3;
                else
                  goto s0;
        s3:
                x=getchar();
                if(x=='1')
                {

                          goto s2;
                }
                else if(x=='.')
                  goto s1;
                else if(x=='!'||x=='@'||x=='$'||x=='&'||x=='%')
                {
                        printf("Error");
                  goto s0;
                }
                else if (x=='#')
                                 goto s4;
                else if(x=='b')
                        goto s3;
                else
                  goto s0;
        s4:
                x=getchar();
                if(x=='1')
                {
                          goto s2;
                }
                else if(x=='.')
                  goto s1;
                else if(x=='!'||x=='@'||x=='$'||x=='&'||x=='%')
                  goto s0;
                else if (x==';')
                        printf("Special character found");
                else if(x=='b')
                        goto s2;
                else
                  goto s0;

                }
}