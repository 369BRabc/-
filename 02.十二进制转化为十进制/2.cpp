// 十二进制转化为十进制
// 考点：进制转换

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

int main() {
	cout << "请输入一个十二进制数：" << endl;
	string s;
	cin >> s;
	int result = 0;
	for(int i = 0; i < s.size(); i++) {
		int j;
		if(s[i] > 'B') { // 要适当考虑错误处理
			result = -1;
			break;
		}
		if(s[i] == 'A') 
			j = 10;
		else if(s[i] == 'B')
			j = 11;
		else 
			j = (s[i] - 48);
		result = result * 12 + j; // 关键一步，体会思想，先用十进制如345的计算来体会
	}
	if(result == -1) {
		cout << "输入有误" << endl;
	} else {
		cout << "十进制数字为: " << endl;
		cout << result << endl;
	}
	return 0;
}