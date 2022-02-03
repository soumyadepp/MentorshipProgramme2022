//To be explained in the class
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n*k + 1);
    arr[0] = 0;
    for(int i = 1 ; i <= n*k ; i++){
        arr[i] = 1;
    }
    unordered_map<int,int>mp;
    vector<int>a(k);
    for(int i = 0 ; i < k ; i++){
        cin>>a[i];
        mp[a[i]] = i;
    }
    for(int i = 0 ; i < k ; i++){
        int j = 0 ;
        int l = 1;
        cout << a[i] << " ";
        arr[a[i]]--;
        while(j < n - 1){
            while(mp.find(l) != mp.end() || arr[l] == 0) l++;
            cout << l << " ";
            arr[l]--;
            l++;
            j++;
        }
        cout<<"\n";
    } 
    return 0;
}
