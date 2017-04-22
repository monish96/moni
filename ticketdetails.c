#include<stdio.h>
int main()
{
  int T1,T2;
  float C1,C2;
  char N1[50],N2[50];
  printf("Ticket 1 :\n");
  printf("Enter Ticket Number :\n");
  scanf("%d",&T1);
  printf("Enter Name :\n");
  scanf("%s",N1);
  printf("Enter Ticket Cost :\n");
  scanf("%f",&C1);
   printf("Ticket 2 :\n");
  printf("Enter Ticket Number :\n");
  scanf("%d",&T2);
  printf("Enter Name :\n");
  scanf("%s",N2);
  printf("Enter Ticket Cost :\n");
  scanf("%f",&C2);
  printf("Ticket Details :\n");
  printf("Ticket 1 :\n");
  printf("Number : %d\n",T1);
  printf("Name : %s\n",N1);
  printf("Cost : %.2f\n",C1);
  printf("Ticket 2 :\n");
  printf("Number : %d\n",T2);
  printf("Name : %s\n",N2);
  printf("Cost : %.2f\n",C2);
  return 0;
}
