#include<iostream>
using namespace std;
int pow(int a,int b){
    int i=1;
    int ans=1;
    while(i<=b){
        ans=ans*a;
        i++;
    }
    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<pow(a,b)<<endl;
    return 0;
}