

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>
void status_1(int nbr)
{
    printf("Your doc number is %d ********** %s",nbr,ch[nbr-1]);
    system("cls");
printf("=========================================== DOCTORS APPOINTMENT RESERVATION  ============================================\n\n\n");
    int i,index=0,j;
    j=input(nbr);
    read_name(nbr);
    char tempname[11][10]={"slot ","slot ","slot ","slot ","slot ","slot ","slot ","slot ","slot ","slot ","slot"};
    for(i=0; i<j; i++)
    {
        strcpy(tempname[num1[i]],name[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("\t\t\t\t");
        for(j=0; j<2; j++)
            {
        printf("%d.%s\t",index+1,tempname[index+1]);
        index++;
            }
            printf("\n");
}
}
