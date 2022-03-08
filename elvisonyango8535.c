/*
payroll system
created by
eugene onyangp
on march 8-2022
MIT license
c99
*/

#include <stdio.h>
#include <stdlib.h>

int main()
   {char name[100],KRA[20];
   int Hours,overtime,gross,tax,net;
   printf("Gitonga\'s Factory Payroll/n");
   printf("Enter name");
   gets(KRA);
   printf("Enter KRA PIN");
   gets(KRA);
   printf("Hours worked:");
   scanf("%d",&Hours);
   return 0;

   if(Hours >60){
    overtime=(Hours-40)*1.5*1000;}
    else{
        overtime=0;
        gross=Hours*1000;
    }
   tax=0.3*gross;
   net=gross-tax;
   printf("employee name:%s\n",name);
   printf("gross income:%d\n",gross);
   printf("tax payed:%d\n",tax);
   printf("net income: %d\n",net);
   return 0;
   }
