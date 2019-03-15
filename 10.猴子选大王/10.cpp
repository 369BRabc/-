/*
N个猴子围成一个圈
1、从第一只猴子开始报数，第一只猴子报1
2、每个报2的猴子退出，然后从下一只猴子重新开始报数，
3、要求输出退出的顺序和最后剩下的人
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include<malloc.h>

using namespace std;

void solve(int n, int m, int s) {
	vector<int> v(n);
	for(int i = 0; i < n; i++) v[i] = i; // 标记数组，删除后改为-1
	int outnum = 0; // 出局人数
	int saynum = 1; // 正在报出的数字
	while(outnum < n) {
		while(saynum < m) {
			s = (s + 1) % n; // 向后推进
			if(v[s] != -1) saynum++;
		}
		// 找到了报数为m的位置
		outnum++;
		v[s] = -1;
		if(outnum < n) cout << "delete:" << s + 1 << endl;
		else cout << "last:" << s + 1 << endl;
		if(outnum < n) {
			saynum = 1;
			while(v[s] == -1) s = (s + 1) % n;
		}
	}
}

int main() {
	int n, m = 2, s = 1; // n总数，m间隔，s开始位置
	cout << "intpu n:" << endl;
	scanf("%d", &n);
	solve(n, m, s - 1);
	system("pause");
	return 0;
}