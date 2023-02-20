#include <stdio.h>

//////////////
// Write a function that gets an array of ints of length n, and returns the maximal value
/////////////

int max( const int array[], int n){

    return 0;
}


int main() {
    int arr1[9] = {2,7,8,2,1,0,4,2,9};
    int arr2[5] = {122,34232,2131,23124,2131};
    int arr3[6] = {34898, 11, 2, 342, 7543, 3};
    int arr4[6] = {324, 123213, 123333213, 12221, 23, 2131};


    if (max(arr1,9)==9){
        printf("TEST 1 PASSED\n");
    }
    else{
        printf("TEST 1 FAILED \n");
    }

    if (max(arr2,5)==34232){
        printf("TEST 2 PASSED\n");
    }
    else{
        printf("TEST 2 FAILED \n");
    }


    if (max(arr3,6)==34898){
        printf("TEST 3 PASSED\n");
    }
    else{
        printf("TEST 3 FAILED \n");
    }

      if (max(arr4,6)==123333213){
        printf("TEST 4 PASSED\n");
    }
    else{
        printf("TEST 4 FAILED \n");
    }

    
}