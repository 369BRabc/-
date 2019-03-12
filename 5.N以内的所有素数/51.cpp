#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
  int n;
  cout << "input n" << endl;
  cin >> n;
  bool p[n] = {false};
  vector<int> prime;
  for(int i = 2; i < n; i++) { // 使用埃氏筛法，降低时间复杂度，应对n比较大的情况
    if(p[i] == false) {
      for(int j = i + i; j < n; j += i) {
        p[j] = true;
      }
      prime.push_back(i);
    }
  }
  cout << n << "以内的质数为" << endl;
  for(int i = 0; i < prime.size(); i++) {
    if(i != 0) cout << " ";
    cout << prime[i];
  }
  cout << endl;
  system("pause");
  return 0;
}