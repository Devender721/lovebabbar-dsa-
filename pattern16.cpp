#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;

   int i=1;
    
   while(i<=n){
    int j=1;
     char ch='A';
    while(j<=i){
        cout<<(char)(ch+i-1)<<" ";
        j++;
        ch++;
    }
    cout<<endl;
    i++;
   }


    return 0;
}