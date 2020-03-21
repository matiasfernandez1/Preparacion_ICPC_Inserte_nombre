#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  cin>>x;
  while(x--){
    int n, c;
    cin>>n;
    int v[n];
    for(int i=0; i<n; i++){
      cin>>v[i];
    }
    sort(v, v+n);
    
    for(int i=1;i<=n;i++){
      int x=0;
      for(int j=0;j<n;j++){
        if(v[j]>=i){
          x++;  
          if(x==i){
            c=x;
            break;
          }
        }
      }
    }
    cout<<c<<"\n";
  }
	return 0;
}
