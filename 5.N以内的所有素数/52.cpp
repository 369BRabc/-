#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>

using namespace std;

bool isPrime(int n) { // 质数判断法
  if(n <= 1) return false;
  int sqr = (int)sqrt(1.0 * n);
  for(int i = 2; i <= sqr; i++) {
    if(n % i == 0) return false;
  }
  return true;
}

int main() {
  int n;
  vector<int> prime;
  cout << "input n" << endl;
  cin >> n;
  for(int i = 1; i < n; i++) {
    if(isPrime(i)) prime.push_back(i);
  }
  cout << "prime is :" << endl;
  for(int i = 0; i < prime.size(); i++) {
    if(i != 0) cout << " ";
    cout << prime[i];
  }
  cout << endl;
  system("pause");
  return 0;
}