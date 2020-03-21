#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int a, b, c, r;
    cin>>a>>b>>c>>r;
    int i, d;
    i=c-r;
    d=c+r;
    
    if(i<min(a,b)){i=min(a,b);}
    if(d<min(a,b)){d=min(a,b);}
    if(d>max(a,b)){d=max(a,b);}
    if(i>max(a,b)){i=max(a,b);}
    cout<<abs(b-a)-abs(i-d)<<"\n";
  }
	return 0;
}
