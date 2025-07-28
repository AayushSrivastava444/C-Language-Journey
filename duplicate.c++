#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, great;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
       cin>>arr[i];
    }
    for(int i=0; i<n; i++){
       great=arr[i];
       for(int j=i+1; j<n; j++){
       if(great==arr[j]){
        for(int k=j; k<n-1; k++){
          arr[k]=arr[k+1];
          
        }
        n--;
        j--;
       }
       }
       
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    
    }
    return 0;
}