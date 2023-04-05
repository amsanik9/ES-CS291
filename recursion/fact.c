/**Finding factorial of a given number */
#include<stdio.h>
int fact(int);
void main() {
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Factorial of %d : %d",n,fact(n));
}
int fact(int a) {
    if(a == 1) {    //base condition
        return 1;
    }
    return (a*fact(a-1)); //calling itself again with decreeased value
}