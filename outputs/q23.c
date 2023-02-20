#include <stdio.h>

// Question 23


void print_arr(int* ar, int n) {
    for(int i = 0; i < n; i++)
    printf("%d ", ar[i]);
    printf("\n");
}

int main(){

    int ar1[5] = {1, 2, 3, 4, 5};
    int ar2[5] = {10, 20, 30, 40, 50};

    printf("address of ar1 is %p\n", ar1);
    printf("address of ar2 is %p\n", ar2);
    // check which of the arrays is allocated first.
    // for example: if ar2 is allocated before ar1, then address of ar2 < address of ar1

    printf("printing ar1: ");
    print_arr(ar1, 5);
    printf("printing ar2: ");
    print_arr(ar2, 5);
    
    printf("modifying arrays our of bounds...\n");
    ar2[5] = 600;
    ar2[6] = 700;
    ar1[5] = -1;
    ar1[6] = -2;


    printf("printing ar1: ");
    print_arr(ar1, 5);
    printf("printing ar2: ");
    print_arr(ar2, 5);

    return 0;
}