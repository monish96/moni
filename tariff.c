#include<stdio.h>
int main()
{
  int mon,stay;
  float rent,total;
  scanf("%d",&mon);
  scanf("%d",&stay);
  scanf("%f",&rent);
 switch(mon)
 {
   case 3:total=rent*stay;
              printf("Hotel Tariff: Rs.%.2f",total);
              break;
   case 4:total=((rent*stay)+((rent*stay)*20/100));
               printf("Hotel Tariff: Rs.%.2f",total);
               break;
    default:
                  printf("Invalid Input");
                      }
                     return 0; 
}
