#include <iostream>
using namespace std;
int main(){
  int n=45;
  cout<<(n>=0 ? "positive" : "negative")<<endl;
  int n1;
  cin>>n1;
  int count =1;
  while(count<=n1){
    cout<<count<<endl;
    count++;
  }
return 0;
}