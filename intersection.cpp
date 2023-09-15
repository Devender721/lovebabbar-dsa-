#include<iostream>
#include<vector>

using namespace std;

int main(){
//    int array1[5]={ 2,4,6,7,8};

// 
//    int array2[5]={ 2,4,3,7,4};
   
   vector<int>arr1={1,2,3,3,4,6,8};
   vector<int>arr2={3,3,4,9};

     vector<int>ans;
    for(int i=0;i<arr1.size();i++){
              for(int j=0;j<arr2.size();j++){
                if(arr1[i]==arr2[j]){
                    ans.push_back(arr2[j]);
                       arr2[j]=-1;
                    
                }
              }   
    }
    for(auto value:ans){
        cout<<value<<" ";
    }
    cout<<endl;


    return 0;
} 
