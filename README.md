#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>

       struct student
                 {
                    char name[20];
                    int  id;
                    float per;
                 } report;

int main()
{
  clrscr();
              printf("Enter Student  Name: ");
              gets(report.name);

              printf("Enter Student Id: ");
              scanf("%d",&report.id);

              printf("Enter Student Percentage: ");
              scanf("%f",&report.per);

              printf("\n");
              printf("Student Name:");
              puts(report.name);
              printf("Student ID:%d \n",report.id);
              printf("Student Percentage:%f \n",report.per);

  getch();
}
