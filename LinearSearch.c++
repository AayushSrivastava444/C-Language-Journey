#include<bits/stdc++.h>
using namespace std;

void linear(int n, int arr[], int num ){
    bool found=false;
    for(int i=0; i<n; i++){
       if(arr[i]==num){
          cout<<i<<endl;
          found=true;
       }
    }
    if(!found){
        cout<<-1<<endl;
    }
}

int main(){

    int n=5;
    int num;
    cin>>num;
    int arr[]={1, 2, 3, 4, 5};
    linear(n, arr, num);
    return 0;

}
