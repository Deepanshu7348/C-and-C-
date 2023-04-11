int isPalindrome(char *str) {
  // Write your code here
	int i,j,str_len = strlen(str);
  	for(i = 0, j = str_len-1; i < j; i++, j--){
      	if(str[i] != str[j]){
          return 0;
        }
    }
  	return 1;
}