#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int>*adj,int src,vector<bool>&visited){
  cout << src << endl;
  visited[src] = true;
  for(auto v : adj[src]){
    if(!visited[v]){
      dfs(adj,v,visited);
    }
  }
}

int main(){
  int v,e,src;
  cin >> v >> e;
  vector<bool>visited(v,false);
  vector<int>*adj = new vector<int>[v];
  for(int i = 0 ; i < e ; i++){
    int u,v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  cout << "Enter source \n";
  cin >> src;
  dfs(adj,0,visited);
  return 0;
}
