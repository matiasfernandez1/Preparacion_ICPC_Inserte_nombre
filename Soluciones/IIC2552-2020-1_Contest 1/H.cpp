#include <bits/stdc++.h>
using namespace std;
bool myfunction( const pair<int, string>& i, const pair<int, string>& j ) {
    if( i.first > j.first ) return false;
    if( j.first > i.first ) return true;
    return j.second > i.second;
}
int distancia(int a, int b){
  int fa=0, fb=0;
  if(a>10&&a<=19){
    a-=10;
    fa=1;
  }
  if(a>19){
    a-=19;
    fa=2;
  }
  if(b>10&&b<=19){
    b-=10;
    fb=1;
  }
  if(b>19){
    b-=19;
    fb=2;
  }
  return (abs(a-b)+abs(fb-fa));
}
int main() {
  map<char, int> teclado;
  teclado.insert(pair<char, int>('q', 1)); 
  teclado.insert(pair<char, int>('w', 2)); 
  teclado.insert(pair<char, int>('e', 3)); 
  teclado.insert(pair<char, int>('r', 4)); 
  teclado.insert(pair<char, int>('t', 5)); 
  teclado.insert(pair<char, int>('y', 6)); 
  teclado.insert(pair<char, int>('u', 7));
  teclado.insert(pair<char, int>('i', 8)); 
  teclado.insert(pair<char, int>('o', 9)); 
  teclado.insert(pair<char, int>('p', 10)); 
  teclado.insert(pair<char, int>('a', 11)); 
  teclado.insert(pair<char, int>('s', 12)); 
  teclado.insert(pair<char, int>('d', 13)); 
  teclado.insert(pair<char, int>('f', 14)); 
  teclado.insert(pair<char, int>('g', 15)); 
  teclado.insert(pair<char, int>('h', 16)); 
  teclado.insert(pair<char, int>('j', 17)); 
  teclado.insert(pair<char, int>('k', 18)); 
  teclado.insert(pair<char, int>('l', 19));
  teclado.insert(pair<char, int>('z', 20));
  teclado.insert(pair<char, int>('x', 21));
  teclado.insert(pair<char, int>('c', 22)); 
  teclado.insert(pair<char, int>('v', 23));
  teclado.insert(pair<char, int>('b', 24));   
  teclado.insert(pair<char, int>('n', 25));
  teclado.insert(pair<char, int>('m', 26));
  
  int n; cin>>n;
  while(n--){
    string xd, uwu;
    int m;
    cin>>xd>>m;
    vector<pair<int,string>> palabras;
    for(int i=0; i<m; i++){
      cin>>uwu;
      int s=0;
      for(int j=0; j<uwu.size(); j++){
        
        s+=distancia(teclado[uwu[j]], teclado[xd[j]]);
        
      }
      palabras.push_back(make_pair(s, uwu));
    }
    sort(palabras.begin(),palabras.end(),myfunction);
    for(auto&& k : palabras){
      cout<<k.second<<" "<<k.first<<"\n";
    }
    
  }
	return 0;
}
