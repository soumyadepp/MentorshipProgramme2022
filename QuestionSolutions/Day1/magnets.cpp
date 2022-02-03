//very easy, to be solved by mentees themselves
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    string now,prev = "";
    int cnt;
    for(int i = 0 ; i < n ; i++){
        cin>>now;
        if(prev == "")
        prev = now , cnt = 1;
        else if(prev[1] == now[0]) cnt++;
        prev = now;
    }
    cout<<cnt<<endl;
    return 0;
}
