#include <iostream>
using namespace std;
int main(){
 int n=10;
 int oddSum=0;
 for(int i=1;i<=n;i++){
  if(i%2!=0){cout<<i<<endl;;
    oddSum+=i;
  }
 }
 cout<<oddSum;
 cout<<endl;
 int i=1;
 while(i<=n){
    if(i%2!=0){cout<<i<<endl;
    oddSum+=i;
  }
  i++;
 }
  cout<<oddSum;
  cout<<endl;

return 0;
}