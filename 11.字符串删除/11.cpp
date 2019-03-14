/*
题目描述：输入一个字符串S1，字符串S2，在字符串删除含有字符串S2的子串，输出删除子串的个数num以及最后剩下的字符串S3。
例如：
输入:S1：ababababac   S2:aba
输出：num=2;S3=bbac
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
  string a, b;
  cout << "input string a:" << endl;
  cin >> a;
  cout << "input string b:" << endl;
  cin >> b;
  int count = 0;
  // 关键之处
  while(a.find(b) != string::npos){ // 注意这里的检测方法，-1也可以，记得使用find方法
    count++;
    a.erase(a.find(b), b.size()); // 注意erase的用法
  }
  cout << count << endl;
  cout << a << endl;
  system("pause");
  return 0;
}
