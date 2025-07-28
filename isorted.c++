#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, great=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
       cin>>arr[i];
    }
    bool isorted=true;
    for(int i=0; i<n; i++){
    if(arr[i]<arr[i-1]){
        isorted=false;
       break;
       }
    }
      
      if(isorted){
         cout<<"The array is sorted"<<endl;
      }
      else{
        cout<<"The array is not sorted"<<endl;
      }
       
    
    return 0;
}