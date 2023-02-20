#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

////////////////////////////////
// Write a function that gets two arrays of ints a and b, 
// and checks a[i] < b[i] for all i.
// Decide on the correct signature for the function
///////////////////////////////

bool check_arrays(const int arr_a[], const int arr_b[], int n){
    return false;
}

int main(){

    //////////////////////////
    int arr1[] = {2, 9, 1, 4, 4, 1, 3, 4, 2, 4};
    int arr2[] = {2, 9, 1, 4, 4, 1, 3, 4, 2, 4};

    if (check_arrays(arr1,arr2,10) == false){
        printf("TEST 1 PASSED\n");
    }
    else{
        printf("TEST 1 FAILED\n");
    }
    //////////////////////////

    //////////////////////////
    int arr3[] = {14, 18, 10, 13, 15, 18, 20, 10, 13, 12};
    int arr4[] = {25, 27, 29, 22, 21, 28, 21, 28, 21, 30};

    if (check_arrays(arr3,arr4,10) == true){
        printf("TEST 2 PASSED\n");
    }
    else{
        printf("TEST 2 FAILED\n");
    }
    ///////////////////////////

    //////////////////////////
    int arr5[] = {42, 21, 31, 43, 48, 26, 38, 27, 22, 21};
    int arr6[] = {58, 50, 67, 55, 58, 77, 71, 50, 79, 63};
    
    if (check_arrays(arr6,arr5,10) == false){
        printf("TEST 3 PASSED\n");
    }
    else{
        printf("TEST 3 FAILED\n");
    }
    /////////////////////////

    ////////////////////////
    int arr7[] = {51, 62, 77, 57, 67, 53, 74, 65, 62, 57};
    int arr8[] = {17, 15, 35, 23, 28, 31, 18, 14, 22, 17};

    if (check_arrays(arr7,arr8,10) == false){
        printf("TEST 4 PASSED\n");
    }
    else{
        printf("TEST 4 FAILED\n");
    }
    //////////////////////////
}



