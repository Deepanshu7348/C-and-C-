#include <stdio.h>
/* Include other headers as needed */
int main()
{
  	int num,rev = 0,temp;
  	scanf("%d",&num);
  	temp = num;
  	while(temp != 0){
      rev = rev*10 + (temp % 10);
      temp /= 10;
    }
  	if(rev == num){
      printf("Equal");
    }
  	else{
      printf("Not Equal");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}