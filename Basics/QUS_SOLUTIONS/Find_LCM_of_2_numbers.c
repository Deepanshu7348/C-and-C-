#include <stdio.h>
int main()
{
  	int mul = 1,x,y,max;
  	scanf("%d%d",&x,&y);
  	max = x > y ? x : y;
  	while(1){
      if(max % x == 0 && max % y == 0){
        printf("%d",max);
        break;
      }
      max++;
    }
    return 0;
}