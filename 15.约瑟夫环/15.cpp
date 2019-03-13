/*
有N个人 围成一圈 按照顺时针方向从第S个人开始从1报数，报到M的人出列，直到所有人都出列，输出出列人的序号顺序
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

// n总人数，m报数间隔，s开始下标、进行中位置
void solve(int n, int m, int s) {
  int say_num = 1, cnt = 0; // 正在报数，已删除人数
  int a[n]; // 奇数数组状态，如果a[i] = -1代表删除
  for(int i = 0; i < n; i++) a[i] = i;
  while(cnt < n) { // 已删除的人比n小
    while(say_num < m) {
      s = (s + 1) % n;
      if(a[s] != -1) say_num++;
    }
    cout << s << endl;
    cnt++; // 第s个人报数为m
    a[s] = -1;
    if(cnt < n) {
      say_num = 1;
      while(a[s] == -1) {
        s = (s + 1) % n;
      }
    }
  }
}

int main() {
  int m, n, s;
  cout << "input m n s:" << endl;
  scanf("%d %d %d", &m, &n, &s);
  solve(m, n, s);
  system("pause");
  return 0;
}