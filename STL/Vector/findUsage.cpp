#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    vector<int>arr;
    cin >> n;
    arr.resize(n);
    for(auto &i : arr){
      cin >> i;
    }
    int x;
    cin >> x;
    int idx = find(arr.begin(),arr.end(),x) - arr.begin();
    cout << idx << endl;
  }
  return 0;
}
