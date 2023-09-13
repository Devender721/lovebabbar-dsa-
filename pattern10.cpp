#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;

   int i=1;
   int k=i;
   while(i<=n){
    int j=1;   
     while(j<=i){
        cout<<k<<" ";
        j++;
        k++;
    }
    cout<<endl;
    i++;
   }


    return 0;
}