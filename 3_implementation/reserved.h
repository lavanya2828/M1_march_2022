#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>
int nbr;
void reserved()
{


    char numstr[100];
system("cls");
printf("=========================================== DOCTORS APPOINTMENT RESERVATION ============================================\n\n\n");//for entering train number
doctor();//for seeing list
printf("Enter the specialist you want to consult:--->");
scanf("%d",&nbr);
system("cls");
printf("=========================================== DOCTORS APPOINTMENT RESERVATION ============================================\n\n\n");//for selecting coach
printf("Your appointment number is %d ********** %s",nbr,ch[nbr-1]);
status_1(nbr);
 FILE *f1, *fopen();//for reading the slots from the user.
 char str1[80]="10";
 int slot1,reserved=0;
if(nbr == 1)
{
 f1 = fopen("tr1.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}else if(nbr == 2)
{
 f1 = fopen("tr2.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}else if(nbr == 3)
{
 f1 = fopen("tr3.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}
else if(nbr == 4)
{
 f1 = fopen("tr4.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}
else if(nbr == 5)
{
 f1 = fopen("tr5.txt","r+");
 fgets(str1,80,f1);
 fclose(f1);
}
slot1=atoi(str1);//covert the string into number
if(slot1 <= 0)
{
 printf("There is no slot available ");
 }else
{
printf("\n\n\n\t\t\t\tAvailable slots:------>%d\n",slot1);
printf("enter the number of slots you want to reserve------>");
scanf("%d",&reserved);

slot1=slot1-reserved;
snprintf(nbr,numstr,10);
doc(reserved,numstr);
printf("\n\t\t\t\tThe Total  amount  for reservation is %d",200*reserved);
snprintf(slot1, str1, 10);
//for reading the seats from the user.
if(nbr == 1)
{
 f1 = fopen("tr1.txt","w");
 fputs(str1,f1);
 fclose(f1);
 }
else if(nbr == 2)
{
 f1 = fopen("tr2.txt","w");
 fputs(str1,f1);
  fclose(f1);
}
else if(nbr == 3)
{
 f1 = fopen("tr3.txt","w");
 fputs(str1,f1);
  fclose(f1);
}
else if(nbr == 4)
{
 f1 = fopen("tr4.txt","w");
 fputs(str1,f1);
  fclose(f1);
}
else if(nbr == 5)
{
 f1 = fopen("tr5.txt","w");
 fputs(str1,f1);
 fclose(f1);
}
}
}
