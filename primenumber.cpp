#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;

  int i=2;
  while(i<n){
    if(n%i==0){
        cout<<"This is not prime"<<endl;
    }else{
        cout<<"This is prime"<<" "<<i<<endl;

    }
    i++;
  }
    return 0;
}