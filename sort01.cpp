#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  
 vector<int>ans{0,0,1,1,0};

  int start=0,end=ans.size()-1;

  int i=0;
  while(start<=end){
    if(ans[start]==0){
        i++;
        start++;
    }
    else if (ans[start]==1){
          swap(ans[i],ans[end]);
          end--;
          i++;
    }
  }
for(auto value:ans){
    cout<<value<<" ";
}
cout<<endl;

return 0;
}