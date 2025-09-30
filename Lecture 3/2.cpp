#include <iostream>
using namespace std;
int main(){
  int n,marks; cin>>n>>marks;
  if(n%2==0){
    cout<<"even\n";
  } else {
    cout<<"odd\n";
  }
if(marks>=90){
  cout<<"A";
} else if(marks>=80 && marks<90){
  cout<<"B";
} else {
  cout<<"C";
}
return 0;
}