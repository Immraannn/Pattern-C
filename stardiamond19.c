#include<stdio.h>
int main(){
int n,m;
printf("Enter the no. of rows:");
scanf("%d",&n);
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
printf("Enter the value of m");
scanf("%d",&m);
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
}