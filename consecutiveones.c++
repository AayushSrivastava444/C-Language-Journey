#include<bits/stdc++.h>
using namespace std;

int consecutive(int n, int arr[]){
    int total=0, maxTotal=0;
      for(int i=0; i<n; i++){
         if(arr[i]==1){
             total++;
             maxTotal = max(maxTotal, total);
         }
         else{
             total=0;
         }
      }
      return maxTotal;
}

int main(){
    int n=6;
    int arr[]={1, 0, 1, 1, 1, 1};
    int total= consecutive(n, arr);
   
    cout<<total<<endl;
    return 0;

}