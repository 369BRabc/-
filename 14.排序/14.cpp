/*
1.排序
输入一个数组 ，输出按照这样的排序 
偶数按照从大到小的排序 
奇数按照从小到大的排序 
如果有奇数那么第一个数字是奇数 
输出按照奇数偶数交叉的顺序排列
如果奇数和偶数的个数不一样多，那么多出的数直接附加在输出的后面
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
  return a > b;
}

int main() {
  cout << "input array:" << endl;
  int i = 0;
  vector<int> a, o, j, result;
  /*2.这种方法使用getchar和cin共同进行处理。假设输入为-1,1,-1,1。首先，cin>>会根据i的类型读一个int，他遇到space会终止，因此第一次得到-1，接着每次getchar都会得到一个空格，这时候继续读就会读到第二个元素1，一直while到终止条件，读到一个换行符“\n”.
  作者：jollysoul 
  来源：CSDN 
  原文：https://blog.csdn.net/juzihongle1/article/details/77642926 
  版权声明：本文为博主原创文章，转载请附上博文链接！
  */
  do {
    cin >> i;
    a.push_back(i);
  } while(getchar() != '\n'); // 这种输入不定长数组的方法要记住。有时候并不是所有系统都像pat一样给N;
  for(int i = 0; i < a.size(); i++) {
    int temp = a[i];
    if(temp % 2 == 0) o.push_back(temp); // o存偶数
    else j.push_back(temp); // j存奇数
  }
  sort(o.begin(), o.end(), cmp); // 注意vector使用sort的方法sort(a.begin(), a.end())
  sort(j.begin(), j.end());
  int maxSize = (j.size() > o.size()) ? j.size() : o.size();
  for(int i = 0; i < maxSize; i++) {
    if(i < j.size()) result.push_back(j[i]);
    if(i < o.size()) result.push_back(o[i]);
  }
  cout << "result is :" << endl;
  for(int i = 0; i < result.size(); i++) {
    if(i != 0) cout << " ";
    cout << result[i];
  }
  cout << endl;
  system("pause");
  return 0;
}