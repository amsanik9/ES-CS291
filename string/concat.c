#include<stdio.h>
void main() {
    char a[20], b[20];
    int i=0, j=0;

    printf("Enter string 1 : ");
    scanf("%s",a);
    printf("Enter string 2 : ");
    scanf("%s",b);

    //concatenating
    while (a[i] != '\0') 
        i++;

    while (b[j] != '\0') {
        a[i++] = b[j++];
    }
    a[i] = '\0';
    printf("concatenayed dtring : ");
    printf("%s",a);
        

}