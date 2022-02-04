
//https://codeforces.com/problemset/problem/1362/A
//Easy math solution

#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve(){
    int a,b;
    cin >> a >> b;
    int res = 0;
    if(a == b){
        cout << res << endl;
        return;
    }
    if(a > b){
        while(a > b){
            //check divisibility by 8 and if a/8 is greater than b
            if(a % 8 == 0 && a / 8 >= b){
                a /= 8;
                res++;
            }
            else if(a % 4 == 0 && a / 4 >= b){
                a /= 4;
                res++;
            }
            else if(a % 2 == 0 && a / 2 >= b){
                a /= 2;
                res++;
            }
            else{
                break;
            }
        }
    }
    else{
        while(a < b){
            if(a * 8 <= b){
            a *= 8;
            res++;
           }
           else if(a * 4 <= b){
               a *= 4;
               res++;
           }
           else if(a * 2 <= b){
               a *= 2;
               res++;
           }
           else{
               break;
           }
       }
    }
    if(a == b) cout << res << endl;
    else cout << - 1 << endl;
    return;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
