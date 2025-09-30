#include <iostream>
using namespace std;
int main(){
 int n=3;
 for(int i=1;i<=n;i++){
  cout<<i<< " ";
 }
 cout<<endl;

int sum=0;
for(int i=1;i<=n;i++){
  sum+=i;
}
cout<<sum<<endl;

for(int i=1;i<=n;i++){
  sum+=i;
  if(i==2){
    break;
  }
}
cout<<sum<<endl;
return 0;
}