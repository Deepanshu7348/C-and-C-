#include <stdio.h>
int main()
{
  	int sum = 0,i,num;
  	scanf("%d",&num);
  	for(i = 1; i < num; i++){
      	if(num % i == 0){
          	sum += i;
        }
    }
  	if(sum == num){
      printf("yes");
    }
  	else{
      printf("no");
    }
    return 0;
}