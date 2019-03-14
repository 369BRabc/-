// 过滤重复字符串

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
	string a, b; // a为输入字符串，b为输出字符串
	cout << "input" << endl;
	cin >> a;
	for(int i = 0; i < a.size(); i++) {
		int flag = 0;
		for(int j = 0; j <= i; j++) {
			if(a[i] == b[j]) flag = 1;
		}
		if(flag == 0) b.insert(b.end(), a[i]); // string没有push_back api, 使用insert(str.end(), temp)来完成push_back的功能。
	}
	cout << "output:" << endl;
	cout << b << endl;
	return 0;
}