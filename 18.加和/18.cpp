/*加和*/
//给定一个整数t，以及n个整数，在这n个整数中找到加和为t的所有组合。

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(vector<vector<int> >& results, vector<int>& result, vector<int>& candidates, int target, int level) {
  // boundary
  if(target == 0) {
    results.push_back(result);
    return;
  }
  // find
  for(int i = level; i < candidates.size() && target - candidates[i] > 0; i++) {
    result.push_back(candidates[i]);
    dfs(results, result, candidates, target - candidates[i], i);
    result.pop_back();
  }
}

vector<vector<int> > combinationSum(vector<int>& candidates, int target) {
  vector<vector<int> > results;
  vector<int> result;
  sort(candidates.begin(), candidates.end());
  dfs(results, result, candidates, target, 0);
  return results;
}

int main() {
  vector<int> candidates;
  vector<vector<int> > results;
  cout << "input candidates:" << endl;
  do {
    int temp;
    candidates.push_back(temp);
  } while(getchar() != '\n');
  int target;
  cout << "input target:" << endl;
  cin >> target;
  results = combinationSum(candidates, target);
  cout << results.size();
  for(int i = 0; i < results.size(); i++) {
    for(int j = 0; j < results[i].size(); j++) {
      cout << results[i][j] << " ";
    }
    cout << endl;
  }
  system("pause");
  return 0;
}