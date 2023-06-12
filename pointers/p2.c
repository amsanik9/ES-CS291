#include<stdio.h>
void main() {
    int a[5] = {2,4,5,8,44};
    int b;
    int *x ,*y;
    y = &b;
    x = y + 2;
    printf("%d       ",*x);
    printf("%d",x);
}