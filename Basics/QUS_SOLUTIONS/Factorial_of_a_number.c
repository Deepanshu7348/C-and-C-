long fact(int n) {
  // Write your code here
  int i;
  long result = 1;
  for(i = 1; i <=n; i++)	result*=i;
  return result;
}