#include <stdio.h>
/* Include other headers as needed */
int main()
{
  	int num,i,j;
  	scanf("%d",&num);
  	for(i = 1; i <= num; i++){
      for(j = i; j >= 1; j--){
        printf("%d",j);
      }
      for(j = j + 2; j <= i; j++){
        printf("%d",j);
      }
      printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}