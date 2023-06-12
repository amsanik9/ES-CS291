#include<stdio.h>
void main() {
    int n,b, dec=0 ,base=1;
    printf("Enter a binary no. : ");
    scanf("%d",&n);
    while (n>0){
        b = n%10;   //remainder
        dec = dec + b*base; //decimel equivalent
        base = base*2;    //updating base
        n = n/10;
    }
    printf("\nDECIMEL EQUIVALENT : %d",dec);
}