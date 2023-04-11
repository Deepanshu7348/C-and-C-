#include<math.h>
void isArmstrong(int n)
{
  	int count_digit = 0,sum = 0,digit,temp = n,temp_count,temp_pow;
  	while(temp){
      	count_digit++;
      	temp /= 10;
    }
  	temp = n;
  	while(temp){
      	digit = temp % 10;
      	sum += pow(digit,count_digit);
      	temp /= 10;
    }
  	if(sum == n){
      	printf("yes");
    }
  	else{
      	printf("no");
    }
}