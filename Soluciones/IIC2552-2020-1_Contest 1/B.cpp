#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  while(getline(cin,s)){
    stringstream n(s);
    int suma=0;
    vector<int> v;
    string numero;
    while(n >> numero){
      int x=stoi(numero);
      v.push_back(x);
      suma+=x;
    }
    for( auto i: v){
      if(i==suma/2){
        cout<<i<<"\n";
        break;
      }
    }
  }
	return 0;
}
