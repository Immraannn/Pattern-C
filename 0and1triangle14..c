#include<stdio.h>
int main(){
int n,a;
printf("Enter the no. of rows:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    if(i%2!=0) a=1;
    else a=0;
    for(int j=1;j<=i;j++){
printf("%d ",a);
if(a==0) a=1;
else a=0;
    }
    printf("\n");
}    
}
// OUTPUT-
// Enter the no. of rows:4
// 1
// 0 1
// 1 0 1
// 0 1 0 1