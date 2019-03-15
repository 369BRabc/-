#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() {
  vector<int> v;
  cout << "input vector v:" << endl;
  do {
    int i;
    cin >> i;
    v.push_back(i);
  } while(getchar() != '\n');
  cout << "vector v is: " << endl;
  for(int i = 0; i < v.size(); i++) {
    if(i != 0) cout << " ";
    cout << v[i];
  }
  cout << endl;
  system("pause");
  return 0;
}