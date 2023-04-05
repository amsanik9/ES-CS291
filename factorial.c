#include<stdio.h>
void main() {
    int n,f=1;
    printf("Enter a no. : ");
    scanf("%d",&n);
    for(int i=1 ;i<=n ;i++) {
        f=f*i;
    }
    printf("factroial of %d : %d",n,f);
}