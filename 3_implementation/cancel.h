#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>
void cancle()
{
 int slot_no,i,j;
 char numstr[100],tempstr2[15]="number",tempstr1[15]="status";
 //login();
  //doctor();
 printf("Enter the specialist number you want to cancel:---->");
 scanf("%d",&nbr);
 snprintf(nbr,numstr,10);
 strcat(numstr,".txt");
 strcat(tempstr1,numstr);
 strcat(tempstr2,numstr);
 input(nbr);
 read_name(nbr);
 status_1(nbr);
 printf("Enter the slot number:--->");
 scanf("%d",&slot_no);
 FILE *a,*b;
 a = fopen(tempstr1,"w+");
 b = fopen(tempstr2,"w+");
 for(i=0; i<10; i++)
 {
     if(num1[i] == slot_no)
     {
         for(j=0; j<10; j++)
         {
             if(num1[j] != slot_no && num1[j] != 0)
             {
                 fprintf(b,"%d ",num1[j]);
                 fprintf(a,"%s",name[j]);
             }
             else if(num1[j] == slot_no && num1[j] != 0)
             {
                 strcpy(name[j],"slot ");
             }
         }
     }
 }
fclose(a);
fclose(b);
printf("\n\n");
    printf("======================================================================================================\n");
 printf("\t\t\t\tYour 200 rupees has been Returned\t\t\t\n");
    printf("======================================================================================================\n");
}
