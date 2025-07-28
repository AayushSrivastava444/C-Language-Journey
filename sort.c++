/*#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[], int n){
    for(int i=0; i<=n-1; i++){
       int j=i;
           while(j>0 && arr[j-1]>arr[j]){
               int temp = arr[j-1];
           arr[j-1]=arr[j];
           arr[j]=temp;
           j--;
           }
           }
       }
          



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    insertion(arr, n);
    for(int i=0; i<n; i++) {
    cout<<arr[i]<<" ";
    }
    return 0;

}*/

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;

    while(left<=mid && right<=high){
          if(arr[left]<=arr[right]){
              temp.push_back(arr[left]);
              left++;
          }
          else{
              temp.push_back(arr[right]);
              right++;
          }
    }
    while(left<=mid){
         
              temp.push_back(arr[left]);
              left++;
          }
          while(right<=high){
              temp.push_back(arr[right]);
              right++;
          }
          for(int i=low; i<=high; i++){
              arr[i]=temp[i-low];
          }
}

void mer(vector<int> &arr, int low, int high){
    if(low==high) return;
    int mid=(low+high)/2;
    mer(arr, low, mid);
    mer(arr, mid+1, high);
    merge(arr, low, mid, high);
}

void mergesort(vector<int> &arr, int n){
    mer(arr, 0, n-1);

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    mergesort(arr, n);
    for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}