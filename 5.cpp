#include<iostream>
using namespace std;
int main(){
int a= 10;
int b=a++;
int c= 20;
int d=++c;
cout<< b << endl;
cout<< a <<endl;
cout<< c << endl;
cout<< d <<endl;
int x=100;
int y=x--;
cout<<y<<endl;
cout<<x<<endl;
int xx=100;
int yy=--xx;
cout<<yy<<endl;
cout<<xx<<endl;
return 0;
}