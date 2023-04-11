#include <stdio.h>
#include <math.h>
int main()
{
  	int capital,rate,time;
  	scanf("%d%d%d",&capital,&rate,&time);
  	printf("%.1f",capital*pow(1+(float)rate/100,time));
    return 0;
}