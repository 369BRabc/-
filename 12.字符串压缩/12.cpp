/*
2.字符串压缩：
题目描述：输入一个字符串S1,对输入的字符进行压缩，如果不能压缩则原封不动。
例如：
输入：S1:aaabbcddddde
输出：S2:3a2bc5de
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

int main() {
  string s;
  string a;
  vector<int> num;
  cout << "input string s:" << endl;
  cin >> s;
  // 不能仅仅考虑简单的使用map，因为这里统计的只是相连的相同字符
  for(int i = 0; i < s.size(); i++) {
    int count = 1;
    while(s[i] == s[i + 1]){
      i++;
      count++;
    }
    a.insert(a.end(), s[i]); // 使用a存放每一个新的字符串
    num.push_back(count); // 使用num存放每一个字符串出现的次数
  }
  cout << "result is :" << endl;
  for(int i = 0; i < a.size(); i++) {
    if(num[i] != 1) cout << num[i];
    cout << a[i];
  }
  cout << endl;
  system("pause");
  return 0;
}