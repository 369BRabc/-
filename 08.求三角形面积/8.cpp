/*
	秦九昭公式
       三角形三边长分别为abc，面积为S，周长为M
	   S=根号下m*(m-a)*(m-b)*(m-c)
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {
  double a, b, c; 
  cout << "input a, b, c" << endl;
  scanf("%lf %lf %lf", &a, &b, &c);
  bool flag = (a + b > c) && (b + c > a) && (c + a > b);
  if(flag) {
    double m = (a + b + c) / 2;
    double s = sqrt(m * (m - a) * (m - b) * (m - c));
    cout << "三角形面积为：" << endl;
    cout << s << endl;
  } else {
    cout << "输入有误" << endl;
  }
  system("pause");
  return 0;
}