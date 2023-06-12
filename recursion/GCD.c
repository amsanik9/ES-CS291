/** Finding GCD of 2 numbers using recursion*/
//Euclid's algorithm
#include<stdio.h>
int GCD(int,int);
void main() {
    int a,b;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    printf("GCD of %d and %d is : %d",a,b,GCD(a,b));
}
int GCD(int x,int y) {
    int c = x % y;
    if(x > y && c == 0) {
        return y;        
    }
    else {
        return GCD(y,c);    //calling itself with swapped value and remainder.
    }
}