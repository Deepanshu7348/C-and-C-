#include <stdio.h>
/* Include other headers as needed */
int main()
{
	int array[10000],test,size,k,i,count;
  	scanf("%d",&test);
  	while(test--){
      	count = 0;
      	scanf("%d%d",&size,&k);
  		for(i = 0; i < size; i++){
          	scanf("%d",&array[i]);
    	}
      	for(i = 0; i < size; i++){
          	if(array[i] == k){
                count++;
              }
            }
      	printf("%d\n",count);
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}