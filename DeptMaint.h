#include<stdio.h>
#include<string.h>

void addDepartment(){
    char name[20],dName[20];
    char ch;
    int dCode=999;

here:   printf("enter department name:");
        scanf("%s",dName);

    FILE *fp = fopen("dept.txt","a+");

    while((ch=fgetc(fp))!= EOF){   
        fscanf(fp,"%s\t\t\t%d",name,&dCode);
        if(!strcasecmp(dName,name)){
            printf("department already exists\n");
            fclose(fp);
            break;
        }
    }

    if((ch=fgetc(fp))==EOF){
        fprintf(fp,"\n%s\t\t\t%d",dName,++dCode);
        fclose(fp);
    }
    else
        goto here;
}

void viewDepartments(){
    char name[20],ch;
    int dCode;
    FILE *fp = fopen("dept.txt","a+");
    printf("DEPARTMENT\t\tCODE\n");
    printf("--------\t\t-----\n");
    while((ch=fgetc(fp))!=EOF){
        fscanf(fp,"%s%d",name,&dCode);
        printf("%s\t\t\t%d\n",name,dCode);
    }
}