#include<stdio.h>
#include<stdlib.h>


void main(){
     char c;


     while(1){

         printf("Enter the string\n");


        s0:
            scanf("%c",&c);
           if(c=='a')
             goto s1;
           else if(c=='.'){
               goto s4;
           }
           else
               goto s0;

        s1:
           scanf("%c",&c);
           if(c=='a')
             goto s1;

            else if(c=='c')
               goto s2;
            else if(c=='.')
               goto s4;
            else
               goto s0;

         s2:
            scanf("%c",&c);
            if(c=='a')
             goto s1;
             else if(c=='c')
               goto s0;
             else if(c=='b'){
              printf("ok");
              goto s3;
              }
              else if(c=='.')
               goto s4;
              else


              
               goto s0;

         s3:
            scanf("%c",&c);
            if(c=='a')

             goto s1;
             else if(c=='c')
               goto s0;
             else if(c=='b'){
              printf("ok");
              goto s3;
              }
              else if(c=='.'){
               goto s4;}
              else
                goto s0;

          s4  : break;
               printf("exited");
                exit(0);

}
}
