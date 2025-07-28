#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string S){
     string rev = S;
     reverse(rev.begin(), rev.end());
     return rev==S;
     

}

     int main(){
        string S, rev;
        cin>>S;
        if(isPalindrome(S)){
        cout<<"THE STRING IS PALINDROME"<<endl;
     }
     else{
        cout<<"THE STRING IS NOT PALINDROME"<<endl;
     }
     }