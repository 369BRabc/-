// ʮ������ת��Ϊʮ����
// ���㣺����ת��

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

int main() {
	cout << "������һ��ʮ����������" << endl;
	string s;
	cin >> s;
	int result = 0;
	for(int i = 0; i < s.size(); i++) {
		int j;
		if(s[i] > 'B') { // Ҫ�ʵ����Ǵ�����
			result = -1;
			break;
		}
		if(s[i] == 'A') 
			j = 10;
		else if(s[i] == 'B')
			j = 11;
		else 
			j = (s[i] - 48);
		result = result * 12 + j; // �ؼ�һ�������˼�룬����ʮ������345�ļ��������
	}
	if(result == -1) {
		cout << "��������" << endl;
	} else {
		cout << "ʮ��������Ϊ: " << endl;
		cout << result << endl;
	}
	return 0;
}