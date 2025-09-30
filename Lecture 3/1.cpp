#include <iostream>
using namespace std;
int main(){
int n,age;
cin>>n;
cin>> age;
if(n>=0){
  cout<< "n is positive\n";
} else{
  cout<<"n is negative";
}
if(age>=18){
  cout<<"you can vote\n";
}else {
  cout<<"you cant vote\n";
}
 return 0;
}