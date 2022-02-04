//https://codeforces.com/problemset/problem/893/B
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int ans = 1;
    for(int k = 1 ; k <= 17 ; k++){
        int divisor = (pow(2,k) - 1) * (pow(2,k - 1));
        if(n % divisor == 0)
        ans = max(ans,divisor);
    }
    cout << ans <<endl;
 
    return 0;
}
