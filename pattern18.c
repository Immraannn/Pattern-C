#include<stdio.h>
int main(){
int n,a;
printf("Enter the no. of rows:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    int a=1;
    int z=i-1;
    for(int j=1;j<=n-i;j++){
        printf(" ");
    }
    for(int k=1;k<=i;k++){
        printf("%d",a);
        a++;
    }
    for(int l=1;l<=i-1;l++){
    
        printf("%d",z);
        z--;
    }
    printf("\n");
}
}
// OUTPUT-
// Enter the no. of rows:4
//    1
//   121
//  12321
// 1234321