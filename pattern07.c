#include<stdio.h>
int main(){
int n;
printf("Enter the value of n:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    int a=1;
    for(int j=1;j<=n;j++){
        printf("%d",a);
        a = a + 2;
    }
    printf("\n");
}
return 0;    
}
// OUTPUT-
// Enter the value of n:4
// 1357
// 1357
// 1357
// 1357