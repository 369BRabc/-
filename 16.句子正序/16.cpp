/*
3.句子正序  
输入一个字符串 可能会有多个连续空格
如student. a am I
把句子正序 正确输出 
I am a student.
如果句子中有多个连续的空格 输出省略为一个
*/

// 有bug

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  string s;
  cout << "intpu string s:" << endl;
  getline(cin, s); // 注意带空格的一行存入string的方法
  cout << s << endl;
  s = "student. a am i";
  reverse(s.begin(), s.end());
  cout << s << endl;
  int i = 0; // reverse的起始位置
  while(i < s.size()) {
    int j = 0; // reverse的长度
    while(s[i + j] != ' '  && (i + j) <= s.size()) j++;
    reverse(s.begin() + i, s.begin() + i + j);
    cout << i << " " << j << endl;
    i = i + j + 1;
  }
  cout << "result is :" << endl;
  cout << s << endl;
  system("pause");
  return 0;
}