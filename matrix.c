#include<stdio.h>

void addmatrices(int A[3][3], int B[3][3], int C[3][3]){
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++)
    C[i][j]=A[i][j]+B[i][j];
}
}


int main(){
int A[3][3]={{1, 2, 3}, {4, 5, 6}}, B[3][3]={{7, 8, 9}, {10, 11, 12}}, C[3][3];

addmatrices(A, B, C);

printf("The addition of two matrices are : ");
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++)
      printf("%d", C[i][j]);
}
return 0;
}
