#include<stdio.h>
void swap(int *a,int *b,int *c) {
    int temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}
void main() {
    int a=2, b=4, c=7;
    printf("before swapping : \n");
    printf("a = %d\nb = %d\nc = %d",a,b,c);
    swap(&a,&b,&c);
    printf("\nafter swapping : \n");
    printf("a = %d\nb = %d\nc = %d",a,b,c);
}