#include<stdio.h>
int main(){
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);
    
    printf("The numbers are : ");
    for(int i=1; i<=n; i++){
       if(n%i==0){
           printf("%d ", i);
       }
       else{}
    }
    return 0;
}