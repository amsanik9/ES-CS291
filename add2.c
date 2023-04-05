/** Adding 2 numbers using a function*/
#include<stdio.h>
int add(int,int);
void main() {
    int a,b;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    printf("sum of %d and %d : %d",a,b,add(a,b));
}
int add(int a,int b) {
    return a+b;
}