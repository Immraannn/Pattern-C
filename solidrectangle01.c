#include<stdio.h>
int main(){
int n;
printf("Enter the value of rows :");
scanf("%d",&n);
int m;
printf("Enter the value of column:");
scanf("%d",&m);
for(int i=1;i<=n;i++){//outer loop ->no. of lines/rows
for(int i=1;i<=m;i++){//inner loop->no. of column
    printf("*");
}
printf("\n");
}    
}
// OUTPUT-
// Enter the value of rows :4
// Enter the value of column:6
// ******
// ******
// ******
// ******