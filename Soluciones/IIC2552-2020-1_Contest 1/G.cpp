#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pairs;
void addEdge(vector<int> adj[], int u, int v){
  adj[u].push_back(v); 
  adj[v].push_back(u); 
} 
int menor_grado(vector<int> adj[], int V) 
{ int d=10;
  for (int v = 1; v < V; ++v) {
    int c=0; 
    for (auto x : adj[v]){
      c++;
    }
    d=min(d, c);
  }
  return d;
}

int main() { 
  vector<int> adj[10]; 
  set<pair<int,int>> s;
  map<pair<int,int>,int> Numba;
  map<pair<int,int>,bool> usado;
  int i=4, a, b, c, d;
  int o=1;
  int vert=0;
  while(i--){
    cin>>a>>b>>c>>d;
    if(a==b&&b==c&&c==d){
      cout<<"NO\n";
      return 0;
    }
    if(a==c){
      vert++;
    }
    pairs x = make_pair(a, b); 
    pairs y = make_pair(c, d); 
    if(!Numba[x]){
    Numba[x]=o;
    o++;
    }
    if(!Numba[y]){
    Numba[y]=o;
    o++;
    }
    pairs w =make_pair(Numba[x],Numba[y]);
    if(usado[w]!=true){
    
    usado[w]=true;
    addEdge(adj,Numba[x],Numba[y]);
    }
    s.insert(x);
    s.insert(y);
  }
  
  
  if(s.size()!=4 or menor_grado(adj,5)!=2 or vert!=2){
    cout<<"NO\n";
  }
  
  else{ cout<<"YES\n";}
  
  return 0;
}
