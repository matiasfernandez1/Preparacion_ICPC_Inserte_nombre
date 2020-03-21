#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  string s;
  cin>>n;
  cin>>s;
  int L[58][n];
  int num=0;
  for(int i=0; i<58; i++){
    for(int j=0; j<n; j++){
    L[i][j]=0;
    }
  }
  vector<int> vis;
  int ult=10000000;
  int inm=0;
  for(int i=0; i<58; i++){
    
    bool apa=false;
    int inm1=0;
    int ult1=10000000;
    
    
    for(int j=0; j<n; j++){
      int k=int(s[j])-65;
      if(k==i){
        
        ult1=j;
        if(apa==false){
          inm1=j;
          vis.push_back(i);
        }
        apa=true;
        if(j==0){
          L[i][j]=1;
        }
        else{L[i][j]=L[i][j-1]+1;
        }
      }
      else{
        if(j!=0){
         L[i][j]=L[i][j-1];
        }
        else{
          L[i][j]=0;
        }
      }
    }
    if(L[i][n-1]!=0){
      num++;
    }
    
    ult=min(ult,ult1);
    inm=max(inm, inm1);
    
  }
  
  int sol=inm+1;
  
  int i=1, j=inm;
  while(i<=ult){
    
    bool falla=true;
    
    int c=1;
    while(c){
      c=0;
      for(auto y : vis){
        if(L[y][j]-L[y][i-1]==0){
          c++;
          j++;
          break;
        }
      }
    }
    sol=min(sol, j-i+1);
    i++;
    
  }
  cout<<sol<<"\n";
	return 0;
}


