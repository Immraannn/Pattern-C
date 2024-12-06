#include<stdio.h>
int main(){
int n,m;
printf("Enter the no. of rows:");
scanf("%d",&n);
// printf("Enter the no. of rows2:");
// scanf("%d",&m);

for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        printf(" ");
    }
    for(int k=1;k<=i;k++){
        printf("*");
    }
    for(int l=1;l<=i-1;l++){
        printf("*");
    }
    printf("\n");
}

for(int a=1;a<=n-1;a++){
    for(int b=1;b<=a;b++){
        printf(" ");
    }
    for(int c=1;c<=7-a-n+1;c++){
        printf("*");
    }
    for(int d=1;d<=6-a-n+1;d++){
        printf("*");
    }
    printf("\n");
}
}
// OUTPUT-
// Enter the no. of rows:4
// Enter the no. of rows2:3
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *