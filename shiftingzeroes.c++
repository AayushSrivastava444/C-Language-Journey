#include<bits/stdc++.h>
using namespace std;

vector<int> shiftzeroes(int n, vector<int>a){
   int j=-1;

   for(int i=0; i<n; i++){
      if(a[i]==0){
      j=i;
      break;
   }
   }

   if(j==-1){
     return a;
   }

   for(int i=j+1; i<n; i++){
      if(a[i]!=0){
        swap(a[i], a[j]);
        j++;
      }
   }
   return a;
}

int main(){
    int n=8;
    vector<int>a={1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};

    vector<int> ans =shiftzeroes(n, a);
    
    for(auto &it : ans){
        cout<<it<<endl;
    }
    return 0;

    
}