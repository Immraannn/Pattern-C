#include<stdio.h>
int main(){
int n,a;
printf("Enter the no. of rows:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        printf(" ");
    }
    for(int k=1;k<=i;k++){
        printf("*");
    }
    printf("\n");
}
}
// OUTPUT-
// Enter the no. of rows:4
//    *
//   **
//  ***
// ****
