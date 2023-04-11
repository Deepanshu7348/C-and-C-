#include <stdio.h>
/* Include other headers as needed */
int main()
{
  	int a,b,c;
  	scanf("%d%d%d",&a,&b,&c);
  	(a > b && a > c) ? printf("%d",a) : (b > c) ? printf("%d",b) : printf("%d",c);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}