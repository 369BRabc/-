/*
问题：输出1000以内的完数
	完数：如果一个数恰好等于除它本身外的因子之和，这个数就是完数。
	例如6=1+2+3.
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
  int n = 1000;
  vector<int> result;
  for(int i = 1; i < n; i++) { // 完数的核心逻辑
    int sum = 0;
    for(int j = 1; j < i; j++) {
      if(i % j == 0) sum += j;
    }
    if(sum == i) result.push_back(i);
  }
  for(vector<int>::iterator it = result.begin(); it != result.end(); it++) { // 试一次使用迭代器访问
    if(it != result.begin()) cout << " ";
    cout << *it; // 访问方式是*it
  }
  cout << endl;
  system("pause");
  return 0;
}