include<stdio.h>
int main()
{
   char fgt_name[50],start_name[50],end_name[50];
  printf("Enter Details :\n");
  printf("Enter Flight Name :\n");
  scanf("%s",fgt_name);
  printf("Enter Starting Location :\n");
  scanf("%s",start_name);
  printf("Enter Ending Location :\n");
  scanf("%s",end_name);
  printf("Travel Details :\n");
  printf("The flight %s starts from %s and reaches %s.",fgt_name,start_name,end_name);
  return 0;
}
