// 这个好像还没有输入“a ”的bug

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  char s[100];
  cout << "input string s:" << endl;
  gets(s); // gets拿到一行
  string str = s;
  reverse(str.begin(), str.end()); // 注意reverse的用法reverse(start, end)
  cout << str;
  system("pause");
  return 0;
}