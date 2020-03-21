#include<bits/stdc++.h>
using namespace std;
int main(){
  string linea;
  map<string,int> p2n;
  map<int,string> n2p;
  while(getline(cin, linea)){
    stringstream linea_2(linea);
    string palabra;
    string numero;
    int c=0;
    linea_2>> palabra;
    if(palabra=="def"){
      linea_2>> palabra;
      linea_2>> numero;
      int n;
      n=stoi(numero);
      if(p2n.count(palabra)){
        n2p.erase(p2n[palabra]);
        p2n[palabra]=n;
      }
      p2n[palabra]=n;
      n2p[n]=palabra;
      
    }
    if(palabra=="calc"){
      
      bool ik=true;;
      int s=0;
      int p_o_s=1;
      string copia=linea.substr(5);
      bool signo_del_n=true;
      while(linea_2>>palabra){ 
        if(p_o_s==1){
          if(p2n.find(palabra)!=p2n.end()){
            
            if(signo_del_n==true){
            s+=p2n[palabra];
            }
            else{
              s-=p2n[palabra];
            }
          }
          else{
            ik=false;
          } 
        }
        else{
          if(palabra=="-"){
            signo_del_n=false;
          }
          else{
            signo_del_n=true;
          }
        }
        p_o_s*=(-1);
      }
      if(ik==true&&n2p.find(s)!=n2p.end()){
      cout<<copia<<" "<<n2p[s]<<"\n";
      }
      else{
        cout<<copia<<" unknown\n";
      }
    }    
    if(palabra=="clear"){
      p2n.clear();
      n2p.clear();
    }
  }
  return 0;
}
