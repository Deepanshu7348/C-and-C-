#include <stdio.h>
/* Include other headers as needed */
int main()
{
  	int add = 0,num,i;
  	scanf("%d",&num);
  	for(i = 1; i <= num; i++) add+= i;
  	printf("%d",add);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}