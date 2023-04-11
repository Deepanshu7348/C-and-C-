#include <stdio.h>
/* Include other headers as needed */
int main()
{
  	int Ist_max,Ist_max_idx,IInd_max,i,size,array[10000];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    scanf("%d",&size);
  	for(i =0; i < size; i++){
      	scanf("%d",&array[i]);
    }
  	//Finding first max...
  	Ist_max = array[0];
  	Ist_max_idx = 0;
  	for(i = 1; i < size; i++){
      	if(array[i] > Ist_max){
          	Ist_max = array[i];
          	Ist_max_idx = i;
        }
    }
  	
  	IInd_max = array[0];
  	for(i = 1; i < size; i++){
      	if(array[i] > IInd_max && i != Ist_max_idx){
          	IInd_max = array[i];
        }
    }
  	printf("%d",IInd_max);
  	return 0;
}