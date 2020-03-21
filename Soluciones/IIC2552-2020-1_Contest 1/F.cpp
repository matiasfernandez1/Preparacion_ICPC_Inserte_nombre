#include<bits/stdc++.h>
using namespace std;

int main() {
  int n=0;
  bool xd=false;
  vector<string> s;
  string x;
  while(getline(cin,x)){
    s.push_back(x);
    int y= x.length();
    n=max(n,y);
  }
  for(int i=0; i<n+2; i++){
    cout<<"*";
  }
  cout<<"\n";
  int ce=0;
  for(auto m :s){
    bool cambio=false;
    ce=n-m.length();
    
    cout<<"*";
    if(ce%2==1&&xd==true){
      cout<<" ";
      xd=false;
      cambio=true;
    }
    for(int i=0; i<ce/2; i++){
      cout<<" ";
    }
    cout<<m;
    for(int i=0; i<ce/2; i++){
      cout<<" ";
    }
    if(ce%2==1&&xd==false&&cambio==false){
      cout<<" ";
      xd=true;
    }
    cout<<"*\n";
  }
  for(int i=0; i<n+2; i++){
    cout<<"*";
  }
  return 0;
}
