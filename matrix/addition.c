#include<stdio.h>
void main() {
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int a[n][n], b[n][n], c[n][n];

    //accepting
    
    //marix 2
    printf("Enter %d elements in matrix 1 : \n",(n*n));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    //marix 2
    printf("Enter %d elements in matrix 2 : \n",(n*n));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d",&b[i][j]);
        }
    }

    //showing in matrix form
    //matrix 1
    printf("matrix 1 : \n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //matrix 2
    printf("matrix 2 : \n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    //adding
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            a[i][j] = a[i][j] + b[i][j];
        }
    }

    //printinig added matrix
    printf("Added matrix : \n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}