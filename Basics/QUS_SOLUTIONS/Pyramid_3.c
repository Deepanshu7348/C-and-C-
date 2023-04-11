#include <stdio.h>
/* Include other headers as needed */
int main()
{
  	int num,i,j;
  	scanf("%d",&num);
  	for(i = 0; i < num; i++){
      for(j = i; j < num-1;j++){
        printf("*");
      }
      for(j = 0; j < i+1; j++){
        printf("%d",j+1);
      }
      printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}