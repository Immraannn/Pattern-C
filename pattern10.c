#include<stdio.h>
int main(){
int n;
printf("Enter no. of rows:");
scanf("%d",&n);
//A B C D
//A B C D
//A B C D
//A B C D
for(int i=1;i<=n;i++){
    int a=1;
    for(int j=1;j<=i;j++){
        int d=a+64;//d=65
        char ch=(char)d;//ch=(char)65 -> ch='A'
        printf("%c ",ch);
        a++;
    }
    printf("\n");
}    
}
//OUTPUT-
// Enter no. of rows:4
// A
// A B
// A B C
// A B C D