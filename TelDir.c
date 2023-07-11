#include<stdio.h>
#include<stdlib.h>
#include "FileFunctions.h"

void main(){
    int eID,eID1,dID,choice;
    char ch,location[20],name[20];

    printf("Telephone Directory Maintainance System\n");
    printf("---------------------------------------------\n");
    printf("Login Screen\n");
    printf("--------------------");
    printf("enter User Id:");
    scanf("%d",&eID);

    FILE *fp = fopen("emp.txt","a+");
    while((ch = fgetc(fp)) != EOF){
        fscanf(fp,"%s%d%d%s",name,&eID1,&dID,location);
        if(eID == eID1)
            break;
    }

    if(ch == EOF){
        printf("User not found\n");
        exit(0);
    }

    while(1){
        printf("Main Menu\n");
        printf("----------------\n");
        printf("1)Department Maintainance\n");
        printf("2)Employee Maintainance\n");
        printf("3)Telephone Directory Maintainance\n");
        printf("4)exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("Department maintainance menu\n");
                printf("---------------------------------\n");
                printf("1)Add Department\n");
                printf("2)Print department details\n");
                printf("3)Goto main menu\n");
                printf("enter your choice:");
                scanf("%d",&choice);
                if(choice == 1)
                    addDepartment();
                else if(choice == 2)
                    viewDepartments();
                else if(choice == 3)
                    break;
                break;

            case 2:
                printf("Employee maintainance menu\n");
                printf("-----------------------------\n");
                printf("1)Add employee\n");
                printf("2)Print the Employee details\n");
                printf("3)Goto main menu\n");
                printf("Enter your choice:");
                scanf("%d",&choice);

                if (choice==1)
                    addEmployee();
                else if(choice==2)
                    viewEmployee();
                else if(choice==3)
                    break;
                break;

            case 3:
                printf("Telephone Directory Maintenance Menu\n");
                printf("-----------------------------------------------\n");
                printf("1)Add Telephone Number\n");
                printf("2)Goto Main Menu\n");
                printf("Enter your choice:");
                scanf("%d",&choice);
                if(choice==1)
                    addTelephoneNumber();
                else if(choice==2)
                    break;
                break;                
            
            case 4:
                exit(0);
            default:
                break;
        }
    }
}