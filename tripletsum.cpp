#include<iostream>
#include<bits/stdc++.h>
#include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
using namespace std;
int main(){


   vector<int>arr{12, 3, 4, 1, 6, 9};
   int sum=24;

    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
           for(int z=j+1;z<arr.size();z++){
            if(arr[i]+arr[j]+arr[z]==sum){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
            }
            }
        }
    }



return 0;
}