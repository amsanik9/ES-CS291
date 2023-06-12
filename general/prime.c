#include<stdio.h>
void main() {
    int n,f=0;
    printf("Enter a no. : ");
    scanf("%d",&n);
    for(int i=2; i<=n/2; i++) {     //traversing from 2 to half of the number
        if(n%i==0){      //factor found
            f=1;    //flag
            break;
        }
    }
    if(f==1) {
        printf("%d is not a prime number",n);
    }
    else{
        printf("%d is a prime number",n);
    }
}