//input output in vector
#include <bits/stdc++.h>
using namespace std;

int main(){
  //dynamic allocation
  vector<int>arr;
  int n;
  cin >> n;
  for(int i = 0 ; i < n ; i++){
    int x;
    cin >> x;
    arr.push_back(x);
  }
  for(auto i : arr){
    cout << i << " ";
  }
  cout << "\n";
  //static allocation
  vector<int>arr2(n);
  for(auto &i : arr2){
    cin >> i;
  }
  for(auto i : arr2){
    cout << i << " ";
  }
  return 0;
}
