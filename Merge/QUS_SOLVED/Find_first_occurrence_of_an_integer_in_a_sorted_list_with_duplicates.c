#include <stdio.h>
/* Include other headers as needed */
int main()
{
  	int test,size,k,i,array[100000];
  	scanf("%d",&test);
  	while(test--){
      	scanf("%d%d",&size,&k);
      	for(i = 0; i < size; i++){
          	scanf("%d",&array[i]);
        }
      	for(i = 0; i < size; i++){
          if(array[i] == k){
            printf("%d\n",i);
            break;
          }
        }
      	if(i == size){
          	printf("-1\n");
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}