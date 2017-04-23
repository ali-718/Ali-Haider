#include<stdio.h>
#include<conio.h>
 main()
 {
 long income,grade,test;
 float tax;
 printf("Enter Your Salary: ");
 scanf("%d",&income);
 printf("Enter Your Grade: ");
 scanf("%d",&grade);
  if (income<=5000 && grade>=1)
 {

   printf("Tax deductions are :0Rs\n",tax);
   printf("Your income is:%dRs",income);
 }
 else if (income>=1 && grade==0)
 {
     printf("Wrong Information");
 }
 else if (income>=15000 && grade>=5)
 {
     tax=(income*5)/100;
     test=income-tax;
   printf("Tax deductions are :%.2lf Rs\n",tax);
   printf("Your income is:%dRs",test);
 }
 else if (income>=30000 && grade<10)
 {
     printf("Wrong Information");
 }
 else if (income>=30000 && grade>=10)
 {

     tax=(income*10)/100;
     test=income-tax;

   printf("Tax deductions are :%.2lf Rs\n",tax);
   printf("Your income is:%dRs",test);
 }
 else if (income>=50000 && grade<15)
 {
     printf("Wrong Information");
 }
 else if (income>=50000 && grade>=15)
 {
       tax=(income*20)/100;
     test=income-tax;

   printf("Tax deductions are :%.2lf Rs\n",tax);
   printf("Your income is:%dRs",test);
 }
 else if (income>=80000 && grade<20)
 {
     printf("Wrong Information");
 }
  else if (income>=80000 && grade>20)
 {
       tax=(income*25)/100;
     test=income-tax;

   printf("Tax deductions are :%.2lf Rs\n",tax);
   printf("Your income is:%dRs",test);

 }
 else if (income>=120000 && grade<25)
 {
     printf("Wrong Information");
 }
 else if (income>=120000 && grade>=25)
 {
       tax=(income*35)/100;
     test=income-tax;

   printf("Tax deductions are :%.2lf Rs\n",tax);
   printf("Your income is:%dRs",test);
 }
printf("\n");
printf("\n");
printf("Made by:Ali Haider\n");
printf("ID:CSC-17S-008");

return 0;

 }
