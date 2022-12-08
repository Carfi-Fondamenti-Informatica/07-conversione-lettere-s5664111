#include <iostream>
#include "lib.h"
using namespace std;
int main(){
  char a=0;
  cin>>a;
  if(funzione(a)==1){
    cout<<char(a)<<endl;
  }
  else{
    cout<<"errore"<<endl;
  }
  return 0;
}
