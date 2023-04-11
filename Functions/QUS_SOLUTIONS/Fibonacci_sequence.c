void fib_sequence(int n) {
  // Write your code here
  long term_1 = 0,term_2 = 1,term_n;
  if(n >= 1){
    	printf("%ld\n",term_1);
  }
  if(n >= 2){
    	printf("%ld\n",term_2);
  }
  while(n > 2){
    	term_n = term_1 + term_2;
    	term_1 = term_2;
    	term_2 = term_n;
    	printf("%ld\n",term_n);
    	n--;
  }
}