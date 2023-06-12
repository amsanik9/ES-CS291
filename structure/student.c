#include<stdio.h>
struct student {
    char name[20];
    int roll, dob;
};

void main() {
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    struct student b[n];

    for(int i=0; i<n; i++) {
        printf("\nEnter name : ");
        scanf("%s",b[i].name);
        printf("Enter roll : ");
        scanf("%d",&b[i].roll);
        printf("Enter dob (01012002) : ");
        scanf("%d",&b[i].dob);
    }

    for(int i=0; i<n; i++) {
        printf("\n\nName : %s",b[i].name);
        printf("\nRoll : %d",b[i].roll);
        printf("\nDOB : %d",b[i].dob);
    }
}

