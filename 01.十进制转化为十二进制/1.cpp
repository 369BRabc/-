//10进制转12进制
// 考点：进制转换

#include <iostream>
#include <stdio.h>
#include <vector>
#include <stdlib.h>

using namespace std;

int main() {
	int x;
	cout << "输入十进制数字:" << endl;
	cin >> x;
	vector<char> num;
	do {
		int temp = x % 12;
		if(temp == 10) 
			num.insert(num.begin(), 'A');
		else if(temp == 11)
			num.insert(num.begin(), 'B');
		else
			num.insert(num.begin(), temp + 48); // 数字0-9与其字符'0'-'9'刚好相差一个48
		x = x / 12;
	} while(x != 0);
	cout << "12进制数字为：" << endl;
	for(int i = 0; i < num.size(); i++) {
		cout << num[i];
	}
	cout << endl;
	system("pause");
	return 0;
}