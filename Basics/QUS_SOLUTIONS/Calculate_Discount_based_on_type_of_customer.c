#include <stdio.h>
int main()
{
  	int g_total;
  	float discount;
  	scanf("%d",&g_total);
  	if(g_total <= 1000){
      discount = 0.00;
    }
  	else if(g_total <= 5000){
      discount = 0.05;
    }
  	else if(g_total <= 10000){
      discount = 0.10;
    }
  	else{
      discount = 0.15;
      if(g_total > 30000){
        discount = 0.17;
      }
    }
  	printf("%.2f",g_total - g_total*discount);
    return 0;
}