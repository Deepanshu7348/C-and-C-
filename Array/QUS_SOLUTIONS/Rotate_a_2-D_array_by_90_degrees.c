#include <stdio.h>
/* Include other headers as needed */
int main()
{
	int i,j,temp,test,size,arr[50][50];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    scanf("%d",&test);
  	while(test--){
      	scanf("%d",&size);
      	for(i = 0; i < size; i++){
          	for(j = 0; j < size; j++){
              	scanf("%d",&arr[i][j]);
            }
        }

        /*
      	for(i = 0; i < size; i++){
          	for(j = size-1; j >= 0; j--){
              	printf("%d ",arr[j][i]);
            }
          	printf("\n");
        }
        */
       for(i = 0 ; i < size; i++){
            for(j = 0; j < size - i; j++){
                temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
       }
       for(i = 0; i < size; i++){
            for(j  = 0; j < size; j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
       }

    }
  	return 0;
}