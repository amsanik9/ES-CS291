#include<stdio.h>
int len(char[]);
void main() {
    char a[20], t;
    int i,j;

    printf("Enter a word : ");
    scanf("%s",a);
    
    int n = len(a);

    for(i=0; i<n/2; i++) {
        t = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = t;
    }

    printf("%s",a);
}
int len(char a[]) {
    int i=0;
    while(a[i++] != '\0'); 
    printf("%d",i);
    return (i-1);
}