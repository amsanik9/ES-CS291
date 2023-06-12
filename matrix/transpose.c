#include<stdio.h>
void main() {
    int n;
    printf("Enter n : ") ;
    scanf("%d",&n);

    int a[n][n];

    printf("Enter %d elemnets : \n",(n*n));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d",&a[i][j]);
        }
    }

    printf("matrix \n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }

    printf("transposed matrix :\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%d  ",a[j][i]);
        }
        printf("\n");
    }
}