#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;

   int i=1;
   int k=16;
   while(i<=n){
    int j=1;
    while(j<=n){
        cout<<k<<" ";
        k--;
        j++;
    }
    cout<<endl;
    i++;
   }


    return 0;
}