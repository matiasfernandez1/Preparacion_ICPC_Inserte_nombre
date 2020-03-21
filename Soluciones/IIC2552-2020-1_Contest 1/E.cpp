#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int v[n];
  for(int i=0; i<n;i++){
    cin>>v[i];
  }
  sort(v, v+n);
  if(v[n-1]==0) cout<<0<<"\n";
  for (int i = 0; i < n; i++){
			if (v[i] >= n - i){
				cout <<n - i<<"\n";
        break;
      }
        
  }
	return 0;
}
