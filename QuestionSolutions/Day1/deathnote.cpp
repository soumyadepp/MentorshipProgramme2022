// to be explained in class
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
        int n , m;
        cin >> n >> m;
        int runningSum = 0;
        vector<int>arr(n);
        for(auto & i : arr){
            cin>>i;
        }
        for(int i = 0 ; i < n ; i++){
            runningSum += arr[i];
            cout<<runningSum / m << " ";
            if(runningSum >= m) runningSum %= m;
        }
        cout<<"\n";
        return 0;
}
