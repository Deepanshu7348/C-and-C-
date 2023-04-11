void isSquare(int n)
{
  	int i;
  	for(i = 1; i <= n; i++){
      if(i*i == n){
        printf("yes");
        return;
      }
    }
  	printf("no");
}