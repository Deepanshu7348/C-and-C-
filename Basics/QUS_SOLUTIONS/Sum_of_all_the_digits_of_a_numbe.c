#include <stdio.h>
/* Include other headers as needed */
int main()
{
  	int test,num,sum;
  	scanf("%d",&test);
  	while(test--){
      	scanf("%d",&num);
      	sum = 0;
      	while(num){
          sum += num % 10;
          num /= 10;
        }
      	printf("%d\n",sum);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}