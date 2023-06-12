#include<stdio.h>
void main() {
    int n=1,c=1,f=0;
    while(c<=100) {
        for(int i=2; i<=n/2 ;i++) {
            if(n%i==0) {
                f=1;
                break;
            }
        }
        if(f==0){
            printf("%d  ",n);
            c++;
        }
        f=0;
        n++;
    }

}