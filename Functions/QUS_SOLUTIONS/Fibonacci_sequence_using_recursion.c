#include <stdio.h>
/* Include other headers as needed */

int fib(int n){
  	if(n < 0){
      	return -1;
    }
  	if(n == 1 || n == 2){
      	return n-1;
    }
  	return fib(n-1) + fib(n-2);
}

int main()
{
  	int num;
  	scanf("%d",&num);
  	for(;num > 0;num--){
      printf("%d\n",fib(num));
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}