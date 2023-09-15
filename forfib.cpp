#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int a,b;
   cin>>a>>b;

   int c;

   for(int i=0;i<n;i++){
   
    c=a+b;
    a=b;
     b=c;
   }

    cout<<b<<endl;

    return n;
}