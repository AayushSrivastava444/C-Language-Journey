/*#include <iostream>
using namespace std;

void f(int n, int &final) {
    if (n <=0) return;
    
        final *= n;
    
    
    
    
    f(n - 1, final);
}

int main() {
    int n, final = 1;
    cin >> n;

    f(n, final);
    
    cout << final << endl;
    return 0;
}*/
#include<iostream>
using namespace std;

void newArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

    void reverse(int rev[], int n){
        int arr[n];
      for(int i=n-1; i>=0; i--){
         arr[n-i-1]=rev[i];
      }
      newArray(arr , n);
    }

    int main(){
        int n=5;
        int arr[]={1, 2, 3, 4, 5};

        reverse(arr,n);
        return 0;
    }
    