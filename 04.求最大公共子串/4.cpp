// 求最大公共子串
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
  string a, b;
  cout << "input a" << endl;
  cin >> a;
  cout << "input b" << endl;
  cin >> b;
  int l1 = a.size(), l2 = b.size();
  int maxlen = 0, maxpos = -1; // 最大公共长度和最大公共子串起始位置
  for(int i = 0; i < l1; i++) {
    for(int j = 0; j < l2; j++) {
      if(a[i] == b[j]) {
        for(int k = 0; ((a[i + k] == b[i + k]) && a[i + k]); k++) {
          if(k > maxlen) {
            maxlen = k;
            maxpos = i;
          }
        }
      }
    }
  }
  if(maxpos == -1) {
    cout << "无最大公共子串" << endl;
  } else {
    cout << "最大公共子串为";
    for(int i = maxpos; i < maxpos + maxlen; i++) {
      cout << a[i];
    }
    cout << endl;
  }
  system("pause");
  return 0;
}