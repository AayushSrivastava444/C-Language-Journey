#include<stdio.h>
int main(){
    int n, key, found=0;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the numbers : ");
    for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
}

    printf("Enter the number to search : ");
    scanf("%d", &key);

    for(int i=0; i<n; i++){
    if(arr[i]==key){
       printf("The number is found");
       found=1;
       break;
    }
    }
    if(!found){
        printf("The number is not found");
    }

}