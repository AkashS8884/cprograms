#include<stdio.h>
char pattern_check();
int main()
{
    char c;
    printf("enter the character\n");
    while(1)
    {
        scanf("%c",&c);
        charcheck:
        if(c=='a'){
            c=pattern_check();
            goto charcheck;
        }
        else if(c=='.')
        {
            break;
        }
        
        }
            }
char pattern_check()
{
    char c;
    scanf("%c",&c);
if(c=='c')
{
    scanf("%c",&c);
    if(c=='#')
    printf("ok\n");
    else
return c;
}
return c;
}


