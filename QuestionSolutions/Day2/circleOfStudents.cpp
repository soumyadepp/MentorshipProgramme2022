//https://codeforces.com/problemset/problem/1203/A
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(auto &i : arr){
            cin >> i;
        }
        bool flag = true;
        for(int i = 1 ;  i < n ; i++){
            if(!(abs(arr[i] - arr[i - 1]) == 1 || arr[i] == 1 && arr[i - 1] == n || arr[i] == n && arr[i - 1] == 1))
            {
                cout << "NO\n";
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES\n";
    }
    return 0;
}
