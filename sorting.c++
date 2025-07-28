/*#include<bits/stdc++.h>
using namespace std;

void selectionsort(int arr[], int n){
     for(int i=0; i<=n-2; i++){
        int mini=i;
        for(int j=i; j<=n-1; j++){
            if(arr[mini]>arr[j]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;

     }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    selectionsort(arr, n);
    for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
    }
    return 0;

    

}*/

/*#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n){
     for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
       

     }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    bubblesort(arr, n);
    for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
    }
    return 0;

    

}*/

#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n){
     for(int i=0; i<=n-1; i++){
        int j=i;
            while(j>0 && arr[j-1]>arr[j]){
                int temp=arr[j-1];
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
    insertionsort(arr, n);
    for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
    }
    return 0;

    

}