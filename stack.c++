#include<bits/stdc++.h>
using namespace std;

#define SIZE 5 

    int top=SIZE-1;
    int stack[SIZE]={1, 2, 3, 4, 5};

    bool isEmpty(){
    return top==-1;
    }

    bool isFull(){
        return top==SIZE-1;
        }

int main(){
if(isEmpty()){
    cout<<"THE STACK IS EMPTY"<<endl;
}
else if(isFull()){
    cout<<"THE STACK IS FULL"<<endl;
}
else{
    cout<<"THE STACK IS NOT FUll"<<endl;
}

return 0;
}