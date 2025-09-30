#include <iostream>
using namespace std;
int main(){
  int n=10;
  int i=1;
  do{
    cout<<i<<endl;
    i++;
  } while(i<=n);
  cout<<endl;
  bool isPrime =true;
  for(i=2;i*i<=n;i++){
    if(n%i==0){
      isPrime=false;
      break;
    }
  }
  if(isPrime==false){
    cout<<"Not prime\n";
  }else{
    cout<<"Prime\n";
  }
  return 0;
}