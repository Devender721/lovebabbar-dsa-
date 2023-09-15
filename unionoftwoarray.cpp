#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using  namespace std;
int main(){
    
    vector<int>ans;

   int  array1[5]={1,3,5,8,9};

   int array2[5]={2,5,6,10,12};


    // union of array
    for(int i=0;i<5;i++){
//    ans[i]=array1[i];
ans.push_back(array1[i]);
    }
for(int i=0;i<5;i++){
//    ans[i]=array2[i];
ans.push_back(array2[i]);

    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}