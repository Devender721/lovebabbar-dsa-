#include<iostream>
#include<vector>
using namespace std;
int finduniqe(vector <int> arr){
      // int i=0;
     int ans=0;
     for(int i=0;i<arr.size();i++){
      ans=ans^arr[i];
  
      
     }
  return ans;
}

int main(){

      int n;
      cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
   }
     int uniqeelement=finduniqe(arr);
     cout<<uniqeelement<<endl;
    return 0; 
}