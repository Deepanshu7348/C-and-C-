int rotationCount(int arr[], int size) {
  // Write your code here
  int i,min = arr[0],minIdx = 0;
  for(i = 1; i < size; i++){
    	if(min > arr[i]){
          	min = arr[i];
          	minIdx = i;
        }
  }
  return minIdx;
  
}