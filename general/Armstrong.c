#include<stdio.h>
void main()
{
    int n, a=0,b, z;
    printf("Enter a no. : ");
    scanf("%d",&n);
    z=n;    //keeping a copy of original number
    while(z>0){
        b = z%10;   
        a = a + (b*b*b);    //cube of each digit
        z = z/10;
    }
    if(n == a) {
        printf("\n%d is an Armstrong number",n);
    }
    else{
        printf("\n%d is not an Armstrong number",n);
    }
}
