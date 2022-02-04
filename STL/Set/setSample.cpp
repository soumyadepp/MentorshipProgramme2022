//insert find and erase in set
// same functions for unordered set , the time complexity will be O(1) for each but here it's O(logn)
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  set<int>set1;
  for(int i = 0 ; i < n ; i++){
    int x;
    cin >> x;
    set1.insert(x);
  }
  for(auto i : set1){
    cout << i << " ";
  }
  int ele;
  cout << "Enter the element you want to erase\n";
  cin >> ele;
  if(set1.find(ele) != set1.end()){
    set1.erase(ele);
  }
  for(auto i : set1){
    cout << i << " ";
  }
  
  return 0;
}
