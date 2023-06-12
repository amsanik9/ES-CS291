#include<stdio.h>
int main() {
    int n = 3;
    int *pn = &n;   //* is used to declare it as a pointer      //*pn means value at the address conrtained in pn
    int **ppn = &pn;    //** denotes pointer to a pointer   

    printf("\nValue of n : %d",n);
    printf("\nValue of n : %d",*pn);
    printf("\nAddress of n : %d",*ppn);
    printf("\nAddress of n : %d",pn);
    printf("\nValue of n : %d",**ppn);
    printf("\nAddress of pn : %d",ppn);

    return 0;
}