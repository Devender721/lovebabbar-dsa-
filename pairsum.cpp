#include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){


   vector<int>arr{1,5,7,-1,5};
   int sum=6;

    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==sum){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
            }
        }
    }



return 0;
}