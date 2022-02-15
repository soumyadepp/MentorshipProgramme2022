#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int>*adj,int src,int n){
    vector<bool>visited(n,false);
    queue<int>bq;
    bq.push(src);
    while(!bq.empty()){
        int fr = bq.front();
        cout << fr << " ";
        visited[fr] = true;
        bq.pop();
        for(auto v : adj[fr]){
            if(!visited[v])
                bq.push(v);
        }
    }
}


int main(){
    int n,e;
    cin >> n >> e;
    vector<int>*adj = new vector<int>[n];
    for(int i = 0 ; i < e ; i++){
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(adj,0);


    return 0;
}
