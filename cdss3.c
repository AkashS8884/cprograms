#include <stdio.h>
#include <stdlib.h>
#define size 100
int string_len(char input[]){
int i;
for(i=0;input[i]!='\0';i++);
return i;
}
int main(){
int choice=0,i=0;
char input[size];
int index;
printf("Enter the String : ");
scanf("%s",input);
while(1){
switch(choice){
case 0:for(index=i;index<string_len(input);index++){
printf("%c",input[index]);
if(input[index] == '.'){
choice= 1;
break;
}else if(input[index] == '1'){
choice=2;
i=index+1;
break;
}else if(input[index] == '!' || input[index] == '@' || input[index] == '$' || input[index] == '%' ||
input[index] == '&'){
    printf("\tError character \n");
i=index+1;
choice= 0;
break;
}else if(input[index] == 'b'){
choice = 3;
i=index+1;
break;
}
}
break;
case 1: printf(" WE FOUND '.' \n Program exit now\n");
exit(0);
break;
case 2:for(index=i;index<string_len(input);index++){
if(input[index] == '.'){
choice= 1;
break;
}
else if(input[index]== '1'){
choice=2;
printf("\tWE GOT '11' OK\n");
i=index+1;
break;
}
else if(input[index] == '!' || input[index] == '@' || input[index] == '$' || input[index] == '%' ||
input[index] == '&'){
printf("Error character \n");
choice =0 ;
i=index+1;
break;
}
else if(input[index]== 'b'){
choice=3;
i=index+1;
break;
}else{
choice = 0;
i= index + 1;
break;
}

break;
case 3:for(index=i;index<string_len(input);index++){
if(input[index] == '.'){
choice= 1;
break;
}
else if(input[index]== '1'){
choice=2;
i=index+1;
break;
}
else if(input[index] == '!' || input[index] == '@' || input[index] == '$' || input[index]
== '%' || input[index] == '&'){
printf("Error character \n");
choice =0 ;
i=index+1;
break;
}
else if(input[index]== 'b'){
choice=4;
i=index+1;
break;
}else{
choice = 0;
i= index + 1;
break;
}
}
break;
case 4:for(index=i;index<string_len(input);index++){
if(input[index] == '.'){
choice= 1;
break;
}
else if(input[index]== '1'){
choice=2;
i=index+1;
break;
}
else if(input[index] == '!' || input[index] == '@' || input[index] == '$' || input[index]
== '%' || input[index] == '&'){
printf("Error character \n");
choice =0 ;
i=index+1;
break;
}
else if(input[index]== 'b'){
choice=4;
i=index+1;
break;
}else if(input[index]== '#'){
choice=5;
i= index+1;
break;
}
else{
choice = 0;
i= index + 1;
i= index + 1;
break;
}
}
break;
case 5:for(index=i;index<string_len(input);index++){
if(input[index] == '.'){
choice= 1;
break;
}
else if(input[index]== '1'){
choice=2;
i=index+1;
break;
}
else if(input[index] == '!' || input[index] == '@' || input[index] == '$' || input[index] == '%' ||
input[index] == '&'){
printf("Error character \n");
choice =0 ;
i=index+1;
break;
}
else if(input[index]== 'b'){
choice=4;
i=index+1;
break;
}else if(input[index]== ';'){
printf("\tFOUND SPECIAL \n");
choice=6;
i= index+1;
break;
}
else{
choice = 0;
i= index + 1;
break;
}
}
break;
case 6:for(index=i;index<string_len(input);index++){
if(input[index] == '.'){
choice= 1;
break;
}
else if(input[index]== '1'){
choice=2;
i=index+1;
break;
}
else if(input[index]== '1'){
choice=2;
i=index+1;
break;
}
else if(input[index] == '!' || input[index] == '@' || input[index] == '$' || input[index]
== '%' || input[index] == '&'){
printf("Error character \n");
choice =0 ;
i=index+1;
break;
}
else if(input[index]== 'b'){
choice=4;
i=index+1;
break;
}
else{
choice = 0;
i= index + 1;
break; }
}
break;
default:exit(0);
}
}
return 0;
}
}

