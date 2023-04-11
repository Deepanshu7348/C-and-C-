#include <stdio.h>
/* Include other headers as needed */
int main()
{
	int year;
  	scanf("%d",&year);
  	(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) ?
      printf("Leap Year") : printf("Not a Leap Year");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}