#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int>arr(n);
  for(auto &i : arr){
    cin >> i;
  }
  //erase first x elements
  int x;
  cin >> x;
  if(x < n)
  arr.erase(arr.begin(),arr.begin() + x);
  //erase kth element
  int k;
  cin >> k;
  if(k < arr.size()){
    arr.erase(arr.begin() + k);
  }
  for(auto i : arr) cout << i << " ";
  
  return 0;
}
