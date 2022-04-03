#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>
char name[32][100]={'\0'};
char number[][2]={'\0'};
int num1[32]={0};
void doc(int reserved,char numstr[100])
{
char tempstr[100],tempstr1[12]="status",tempstr2[12]="number";
int number;
    FILE *a,*b;
    int i=0;
   strcat(numstr,".txt");
   strcat(tempstr1,numstr);
   strcat(tempstr2,numstr);
   a = fopen(tempstr1,"a");//for open the file to write the name in the file
   b = fopen(tempstr2,"a");//for open the file for writing the number in the file
for(i=0; i<reserved; i++)//for entering the person name and slot number in the file
{
    printf("============================Enter the details for slot no %d============================\n\n\n",i+1);
      printf("\t\t\t\tEnter the slot number:--->");
      scanf("%d",&number);
      printf("\t\t\t\tEnter the name of person:--->");
      scanf("%s",name[number-1]);
    printf("\n======================================================================================================\n\n");
    printf("\n");
      snprintf(number, tempstr, 10);
      fprintf(a,"%s ",name[number-1]);
      fprintf(b,"%s ",tempstr);

}
fclose(a);
fclose(b);
}
int input(int nbr)//for putting the numeric value in the array
{
char tempstr2[12]="number";
FILE *a;
char numstr[100];
int i=0,j=0,k;
snprintf(nbr,numstr,10);
strcat(numstr,".txt");
strcat(tempstr2,numstr);
a = fopen(tempstr2,"a+");//for open the file to write the name in the file
   while(!feof(a))
   {
      number[i][j] = fgetc(a);

      if(number[i][j] == ' ')
      {
          j=0;
          i++;
      }
      else
      {
      j++;
      }
   }
   k=i;
   for(i=0; i<k; i++)
   {
       num1[i] = atoi(number[i]);
   }
   fclose(a);
   return k;
}
