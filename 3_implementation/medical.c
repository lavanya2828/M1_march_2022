#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>
#include "doctor.h"
#include "reserved.h"
#include "doc.h"
#include "read_name.h"
#include "status.h"
#include "status_1.h"
#include "cancel.h"
#include "login.h"

int nbr;
//void doctor();//for list of specialists
//void doc(int booking,char numstr[100]);
//void reserved();//booking the slots
//int input(int nbr);//for reading the number fromthe file
//void read_name(int nbr);//for reading the name from the file
//void status();//for printing the status by user input
//void status_1(int nbr);//for printing the status
//void cancle();
//void login();

int main()
{
	login();
    int num;
    do{
    system("cls");
    printf("\n\n\n");
   printf("====================================== WELCOME TO DOCTORS APPOINTMENT RESERVATION ======================================\n\n\n");
    printf("\t\t\t\t\t[1]=> View Secialists List\n");
    printf("\n");
    printf("\t\t\t\t\t[2]=> Reserve an appointment\n");
    printf("\n");
    printf("\t\t\t\t\t[3]=> Cancle Reservation\n");
    printf("\n");
    printf("\t\t\t\t\t[4]=> status\n\n");
    printf("\t\t\t\t\t[5]=> Exit\n\n");
    printf("===============================================================================================================\n\n");
    printf("\t\t\tEnter Your Choice:: ");
    scanf("%d",&num);
   switch(num)
        {
    case 1:
        doctor();// list of specialists
        break;
    case 2:
        reserved();//booking the slots
        break;
    case 3:
        cancle();
        break;
    case 4:
        status();
        break;

    }

getchar();
    }while(num != 5);
    printf("\t----------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\tThank You For Using This System\t\t\t\t\t\t\n");
    printf("\t----------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\tstay safe stay happy");
    getchar();
    return 0;
}



