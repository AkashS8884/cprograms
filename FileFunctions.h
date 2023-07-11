#include<stdio.h>
#include<string.h>
#include "DeptMaint.h"

void addEmployee(){
    char ename[20],ch,name[20],location[10],tempLocation[10];
    int dCode,edCode,eCode=999;

    printf("enter employee name:");
    scanf("%s",ename);

    FILE *fe = fopen("emp.txt","a+");
    while((ch = fgetc(fe)) != EOF){
        fscanf(fe,"%s%d%d%s",name,&eCode,&dCode,tempLocation);
    }

    printf("Employee Code:%d\n",++eCode);

    FILE *fp = fopen("dept.txt","r");

here:   printf("choose one department from below options\n");
        viewDepartments();
        scanf("%d",&edCode);

    while((ch = fgetc(fp))!=EOF){
        fscanf(fp,"%s\t\t\t%d",name,&dCode);
        if(dCode == edCode)
            break;
    }

    if(ch == EOF){
        printf("entered department doesn't exist\n");
        printf("choose again\n");
        goto here;
    }
    else{
        fclose(fp);
        printf("enter location\n");
        scanf("%s",location);
        fprintf(fe,"\n%s\t\t%d\t\t%d\t\t%s",ename,eCode,edCode,location);
        fclose(fe);
    }
}

void viewEmployee(){
    char name[20],location[20],ch;
    int eID,dID;

    FILE *fp = fopen("emp.txt","a+");

    printf("Employee name\tEmployee ID\tDepartment ID\tlocation\n");
    printf("-----------------------------------------------------------\n");

    while((ch = fgetc(fp)) != EOF){
        fscanf(fp,"%s%d%d%s",name,&eID,&dID,location);
        printf("%s\t\t%d\t\t%d\t\t%s\n",name,eID,dID,location);
    }
    fclose(fp);
}

void addTelephoneNumber(){
    char name[20],location[20],ch,location1[20];
    int eID,dID,eID1,dID1,TelephoneNumber,TelephoneNumber1;

    FILE *fp = fopen("emp.txt","r");

here:   printf("enter employee ID:");
        scanf("%d",&eID1);

    while((ch = fgetc(fp)) != EOF){
        fscanf(fp,"%s%d%d%s",name,&eID,&dID,location1);
        if(eID1 == eID)
            break;
    }

    if(ch == EOF){
        printf("entered employee ID doesn't exist,try again\n");
        goto here;
    }

    else{
        printf("Location:%s\n",location1);
        printf("Department code:%d\n",dID);
        TelephoneNumber = (1000*dID) + 001;
        FILE *fp1 = fopen("TelephoneNumbers.txt","a+");
        while((ch = fgetc(fp1)) != EOF){
            fscanf(fp1,"%d%s%d%d",&eID1,location,&dID1,&TelephoneNumber1);
            if(dID1 == dID)
                TelephoneNumber++;
        }
        fprintf(fp1,"\n%d\t\t%s\t\t%d\t\t%d",eID,location1,dID,TelephoneNumber);
        printf("Telephone Number allocated : %d\n",TelephoneNumber);
    }
}

void EnquiryOnEmployeeName(){
    char name[20],name1[20],dName[20],location[20],ch;
    int TelephoneNumber,eID,eID1,dID,dID1;

    FILE *fp,*fp1,*fp2;

here:   printf("enter employee name:");
        scanf("%s",name);

    fp = fopen("emp.txt","r");
    fp1 = fopen("dept.txt","r");
    fp2 = fopen("TelephoneNumbers.txt","r");

    while((ch=fgetc(fp)) != EOF){
        fscanf(fp,"%s%d%d%s",name1,&eID,&dID,location);
        if(strcmp(name,name1) == 0)
            break;
    }
    if(ch == EOF){
        printf("entered name doesn't exist,try again\n");
        goto here;
    }
    else{
        while((ch = fgetc(fp1)) != EOF){
            fscanf(fp1,"%s%d",dName,&dID1);
            if(dID == dID1)
                break;
        }

        printf("name\t\tdepartment\t\tlocation\t\tTelNumber\n");
        printf("-----------------------------------------------------------------------\n");

        while((ch = fgetc(fp2))!=EOF){
            fscanf(fp2,"%d%s%d%d",&eID1,location,&dID,&TelephoneNumber);
            if(eID == eID1)
                printf("%s\t\t%s\t\t\t%s\t\t\t%d\n",name,dName,location,TelephoneNumber);
        }
    }
}

void EnquiryOnTelephoneNumber(){
    char name[20],dName[20],location[20],ch;
    int eId,eId1,dId,dId1,telephone,telephone1;

    printf("enter telephone number:");
    scanf("%d",&telephone);

    FILE *fp = fopen("TelephoneNumbers.txt","r");
    FILE *fp1 = fopen("emp.txt","r");
    FILE *fp2 = fopen("dept.txt","r");

    while((ch=fgetc(fp)) !=  EOF){
        fscanf(fp,"%d%s%d%d",&eId,location,&dId,&telephone1);
        if(telephone1 == telephone){
            while((ch = fgetc(fp1)) != EOF){
                fscanf(fp1,"%s%d%d%s",name,&eId1,&dId,location);
                if(eId == eId1)
                    break;
            }
            break;
        }
    }

    while((ch = fgetc(fp2)) != EOF){
        fscanf(fp2,"%s%d",dName,&dId1);
        if(dId == dId1)
            break;
    }

    printf("Employee Name:%s\n",name);
    printf("location:%s\n",location);
    printf("dName : %s\n",dName);
}