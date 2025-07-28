#include<stdio.h>
int main(){
    int n1, n2;

    printf("Enter the size of first array : ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter the numbers of first array : ");
    for(int i=0; i<n1; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of first array : ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter the numbers of first array : ");
    for(int i=0; i<n2; i++){
        scanf("%d", &arr2[i]);
    }

    int merged[n1+n2];

    for(int i=0; i<n1; i++){
       merged[i]=arr1[i];
    }

    for(int i=0; i<n2; i++){
       merged[i+n1]=arr2[i];
    }

    printf("The merged array is ");
    for(int i=0; i<(n1+n2); i++){
       printf("%d", merged[i]);
    }
    return 0;
}