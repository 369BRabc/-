//10����ת12����
// ���㣺����ת��

#include <iostream>
#include <stdio.h>
#include <vector>
#include <stdlib.h>

using namespace std;

int main() {
	int x;
	cout << "����ʮ��������:" << endl;
	cin >> x;
	vector<char> num;
	do {
		int temp = x % 12;
		if(temp == 10) 
			num.insert(num.begin(), 'A');
		else if(temp == 11)
			num.insert(num.begin(), 'B');
		else
			num.insert(num.begin(), temp + 48); // ����0-9�����ַ�'0'-'9'�պ����һ��48
		x = x / 12;
	} while(x != 0);
	cout << "12��������Ϊ��" << endl;
	for(int i = 0; i < num.size(); i++) {
		cout << num[i];
	}
	cout << endl;
	system("pause");
	return 0;
}