#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;

   int i=1;
    int k=9;
   while(i<=n){
    int j=1;
    while(j<=n){
        cout<<k<<" ";
        j++;
        k--;
    }
    cout<<endl;
    i++;
   }


    return 0;
}