/*
有N个人 围成一圈 按照顺时针方向从第S个人开始从1报数，报到M的人出列，直到所有人都出列，输出出列人的序号顺序
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

void solve(int n, int m, int s) {
	vector<int> v(n);
	for(int i = 0; i < n; i++) v[i] = i; // 标记数组，删除后改为-1
	int outnum = 0; // 出局人数
	int saynum = 1; // 正在报出的数字
	while(outnum < n){
		while(saynum < m) {
			s = (s + 1) % n; // 向后推进
			if(v[s] != -1) saynum++;
		}
		// 找到了报数为m的位置
		cout << "delete:" << s + 1 << endl;
		v[s] = -1;
		outnum++;
		if(outnum < n) { // 这里是在初始化
			saynum = 1;
			while(v[s] == -1) s = (s + 1) % n;
		}
	}
}

int main() {
	int n, m, s; // n总数，m间隔，s开始位置
	cout << "intput n, m, s:" << endl;
	scanf("%d %d %d", &n, &m, &s);
	solve(n, m, s);
	system("pause");
	return 0;
}