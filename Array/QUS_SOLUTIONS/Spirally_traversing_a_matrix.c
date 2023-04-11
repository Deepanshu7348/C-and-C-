void printSpiral(int a[ROWS][COLS], int r, int c) {
  // Write your code here
  int i,j=0,k=0;
  while(j < c && k < r){
    	for(i = j; i < c; i++){
          	printf("%d\n",a[k][i]);
        }
    	k++;
    	for(i = k; i < r; i++){
          	printf("%d\n",a[i][c-1]);
        }
    	c--;
    	if(k < r){
          	for(i = c - 1; i >= j; i--){
              	printf("%d\n",a[r-1][i]);
            }
        r--;
        }
    	if(j < c){
          	for(i = r - 1; i >= k; i--){
              	printf("%d\n",a[i][j]);
            }
        j++;
        }
  }
  
  
}