#include<stdio.h>
void main() {
    int n,i,j,t;
    printf("Enter n : ");
    scanf("%d",&n);

    int a[n];
    printf("Enter %d elements: \n",n);
    for(i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++) {
        for(j=i; j<n; j++) {
            if(a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    printf("\nin ascending order : ");
    for(i=0; i<n; i++) {
        printf("%d  ",a[i]);
    }
    
}