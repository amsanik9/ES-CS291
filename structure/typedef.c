#include<stdio.h>
struct student {
    int roll;
    char name[20];
    float marks;
};
void main() {
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    typedef struct student STD;
    STD *ptr[n]; 

    for(int i=0; i<n; i++) {
        printf("Enter name : ");
        scanf("%s",ptr[i]->name);
        printf("Enter roll no. : ");
        scanf("%d",&ptr[i]->roll);
        printf("Enter marks : ");
        scanf("%f",&ptr[i]->marks);
    }

    for(int i=0; i<n; i++) {
        printf("Name : %s",ptr[i]->name);
        printf("Roll no. : %d",ptr[i]->roll);
        printf("Marks : %f",ptr[i]->marks);
    }
}
