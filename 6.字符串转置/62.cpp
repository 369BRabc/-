#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  char s[100];
  cout << "input string s:" << endl;
  gets(s);
  string str = s;
  int len = str.size();
  for(int i = 0; i <= len / 2; i++) {
    char temp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = temp;
  }
  cout << str;
  system("pause");
  return 0;
}