/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, great=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
       cin>>arr[i];
       great=arr[i];
       if(arr[i]>great){
          great=arr[i];
       }
       else{}
    }
    cout<<great<<endl;
    return 0;
}*/

//Second Largest//

#include<bits/stdc++.h>
using namespace std;

    int main(){
        int n, largest=INT_MIN, secondlargest=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
       cin>>arr[i];
    }
       for(int i=0; i<n; i++){
       if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
       }
       else if(arr[i]>secondlargest && arr[i]!=largest){
             secondlargest=arr[i];
       }
       }

       if(secondlargest==INT_MIN){
         cout<<"THERE IS NO SECOND LARGEST ELEMENT"<<endl;
       }
       else{
        cout<<"SECOND LARGEST ELEMENT IS:"<<secondlargest<<endl;
       }
    
    return 0;
    }
