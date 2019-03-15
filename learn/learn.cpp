#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
 
void findpath(vector<int> a,vector<int> path,int n,int start,int sum){
	for(int i=start;i<n;i++){//从第一个数开始遍历
		sum-=a[i];
		path.push_back(i);
		if(sum==0){//说明找到了满足要求的一条路径
			for(int j=0;j<path.size();j++){
				cout<<a[path[j]]<<" ";
			}
			cout<<endl;
			path.clear();
		}
		else if(sum>0){//目前的和小于要求的和，要继续往后找
			findpath(a,path,n,i+1,sum);
		}
		sum+=a[i];//如果和大于了sum，说明当前这个数不能加入路径里
		if(path.size()>0)path.pop_back();
 
	}
}
int main(){
	int n;
	cin>>n;
	int temp;
	vector<int> data;
	for(int i=0;i<n;i++){
		cin>>temp;
		data.push_back(temp);
	}
	int sum;
	cin>>sum;
	vector<int> allpath;
	findpath(data,allpath,n,0,sum);
	cin.get();
	cin.get();
	return 0;
}