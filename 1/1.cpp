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
	












	/*
	int n;
	int i=1;
	char num[100];
	printf("请输入一个十进制数:");
	scanf("%d",&n);
	printf("\n");
	while(n!=0)
	{
		if(n%12==10)
			num[i]='A';
		else if(n%12==11)
			num[i]='B';
		else
			num[i]=n%12+48;//数字0-9与其字符'0'-'9'刚好相差一个48
		n=n/12;
		i++;
	}
	i--;
	printf("转换后的十二进制数为：");
	for(;i>0;i--)
		printf("%c",num[i]);
	printf("\n");
	*/
