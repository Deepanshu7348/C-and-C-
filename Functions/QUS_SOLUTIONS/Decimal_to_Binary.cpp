#include<bits/stdc++.h>
using namespace std;
void decimalToBinary(int n) {
  // Write your Code here
  string bn;
  while(n){
    bn = to_string(n%2) + bn;
    n /= 2;
  }
  cout<<bn;
}