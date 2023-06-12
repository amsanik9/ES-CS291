#include<stdio.h>
struct book {
    int page;
    float price;
    char name[20];
};

void main() {
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    struct book b1[n];

    //accepting
    for(int i=0; i<n; i++) {
        printf("\nEnter book name : ");
        scanf("%s",b1[i].name);
        printf("Enter book price : ");
        scanf("%f",&b1[i].price);
        printf("Enter no. of pages : ");
        scanf("%d",&b1[i].page);
    }

    //printing
    for(int i=0; i<n; i++) {
        printf("\nBook name : %s",b1[i].name);
        printf("\nPrice : %.2f",b1[i].price);
        printf("\nPages : %d",b1[i].page);
    }
}