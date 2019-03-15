/*
问题：在一般语言中对整型数都有个最大限制，现给出两个超出正常范围的十进制数对其进行求和，带进位的加法。
*/
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <string>

using namespace std;

string big_add(string a, string b) {
  string result;
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  int lena = a.size(), lenb = b.size(), lenmax = lena > lenb ? lena : lenb;
  int carry = 0; // 进位
  for(int i = 0; i < lenmax; i++) {
    int tempa, tempb, temp;
    if(i < lena) tempa = a[i] - '0';
    else tempa = 0;
    if(i < lenb) tempb = b[i] - '0';
    else tempb = 0;
    temp = tempa + tempb + carry;
    carry = temp / 10;
    result.insert(result.end(), temp % 10 + 48);
  }
  if(carry == 1) result.insert(result.end(), carry);
  reverse(result.begin(), result.end());
  return result;
}

string big_del(string a, string b) {
  string result;
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  int lena = a.size(), lenb = b.size(), lenmax = lena > lenb ? lena : lenb;
  for(int i = 0; i < lenmax; i++) {
    int tempa, tempb, temp;
    if(i < lena) tempa = a[i] - '0';
    else tempa = 0;
    if(i < lenb) tempb = b[i] - '0';
    else tempb = 0;
    temp = tempa - tempb;
    if(temp < 0) { 
      temp = temp + 10;
      a[i + 1] -= 1;
    }
    // printf("%d %d %d\n", tempa, tempb, temp);
    result.insert(result.end(), temp + 48);
  }
  while((result.size() - 1) >= 1 && result[result.size() - 1] == 0) {
    result.erase(result.end() - 1, result.end());
  }
  reverse(result.begin(), result.end());
  return result;
}

int main() {
  string a, b;
  cout << "input string a, b:" << endl;
  cin >> a;
  cin >> b;
  cout << "add result is:" << endl;
  cout << big_add(a, b) << endl;
  cout << "del result is:" << endl;
  cout << big_del(a, b) << endl;
  system("pause");
  return 0;
}