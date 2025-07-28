#include<stdio.h>
int main(){
    int n, digit, key=0;

    printf("Enter the number : ");
    scanf("%d", &n);


    while(n>0){
       digit=n%10;
       key++;
       n=n/10;
    }
    printf("The Digits in the number are %d : ", key);
    return 0;
}