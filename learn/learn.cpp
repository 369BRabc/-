#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
 
int main() {
	int n, k, x, maxSumSqu = -1, a[maxn];
	vector<int> temp, ans;
	void dfs(int index, int nowk, int sum, int sumSqu) {
		if(nowk == k && sum == x) {
			if(sumSqu > maxSumSqu) maxSumSqu = sumSqu;
			ans = temp;
		}
		if(index == n || nowk > k || sum > x) return;
		temp.push_back(a[index]);
		dfs(index + 1, nowk + 1, sum + a[index], sumSqu + a[index] * a[index]) 
		temp.pop_back();
		dfs(index + 1, nowk, sum, sumSqu);
	}
	system("pause");
	return 0;
}
