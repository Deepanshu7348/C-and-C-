#include <stdio.h>
/* Include other headers as needed */
inline void interChange(int* ith_element,int* jth_element){
    int temp = *ith_element;
    *ith_element = *jth_element;
    *jth_element = temp;
}

void rotateArray(int arr[],int size,int rotate){
  	int i,j = 0;
  	for(i = rotate; i < size; i++){
      	arr[j++] = arr[i];
    }
    for(i = 0; i < rotate; i++){
        arr[j++] = arr[i];
    }
}
void printArray(int arr[],int size){
    int i;
    for(i = 0; i < size; i++){
    	printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  	int i,test,size,rotate,arr[100000];
  	scanf("%d",&test);
  	while(test--){
      	scanf("%d",&size);
      	for(i = 0; i < size; i++){
          	scanf("%d",&arr[i]);
        }
      	scanf("%d",&rotate);
      	rotateArray(arr,size,rotate);
      	printArray(arr,size);
    }
    return 0;
}