#include<bits/stdc++.h>
using namespace std;

int unique(int n, int arr[]){
    int xorr=0;
    for(int i=0; i<n; i++){
       xorr=xorr^arr[i];
    }
    return xorr;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
       cin>>arr[i];
    }
    int ans=unique(n, arr);
    cout<<ans<<endl;
     return 0;
}