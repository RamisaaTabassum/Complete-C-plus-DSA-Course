#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<i+1;j++)
    {
      cout<<"*" ;
    }
    cout<<endl;
  }
  int num=1;
    for(int i=0;i<n;i++)
  {
    for(int j=0;j<i+1;j++)
    {
      cout<<num<<" ";
    }
    num++;
    cout<<endl;
  }
   char ch='A';
    for(int i=0;i<n;i++)
  {
    for(int j=0;j<i+1;j++)
    {
      cout<<ch<<" ";
    }
    ch++;
    cout<<endl;
  }
  for(int i=0;i<n;i++){
    int number=1;
    for(int j=0;j<i+1;j++){
      cout<<number<<" ";
      number++;
    }
    cout<<endl;
  }

   for(int i=0;i<n;i++){
    
    for(int j=1;j<=i+1;j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
   
   
   

 return 0;
}