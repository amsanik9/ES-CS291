/** Finding LCM of 2 numbers using recuirison*/
#include<stdio.h>
int lcm(int,int);
void main() {
    int a,b;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    printf("LCM of %d and %d is : %d",a,b,lcm(a,b));
}
int lcm(int x,int y) {
    int m = x > y ? x : y;  //finding max accepted number 
    for(int i=m ; i<=(x*y) ; i++) {     
        if(i%x==0 && i%y==0) {  //if i gets divided by both nunbers LCM found
            return i;
        }
    }
}