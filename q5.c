#include <stdio.h>
#include <stdlib.h>

////////////////////
// Write a function that gets an array of ints of length n, and returns the minimal and maximal value. 
// It is easy to do it using 2n comparisons. Can you do it using at most 3n/2+O(1) comparisons?
///////////////////

typedef struct {
    int max;
    int min;
} min_max;

min_max find_min_max( const int array[], int n){
    
    min_max num; // must declare an instance of the struct
    // Use the dot operator to access the two different ints 
    // inside the newly declare struct
    
    return num; // return the declared struct
}

int main(){

    int arr1[9] = {2,7,8,2,1,0,4,2,9};
    int arr2[5] = {122,34232,-2131,23124,2131};
    int arr3[6] = {34898, 11, 2, 342, 7543, 3};
    int arr4[6] = {-324, 123213, 123333213, -12221, 23, 2131};

    if ((find_min_max(arr1,9).max==9) && (find_min_max(arr1,9).min==0)){
        printf("TEST 1 PASSED\n");
    }
    else{
        printf("TEST 1 FAILED \n");
    }

    if ((find_min_max(arr2,5).max==34232) && (find_min_max(arr2,5).min==-2131)){
        printf("TEST 2 PASSED\n");
    }
    else{
        printf("TEST 2 FAILED \n");
    }


    if ((find_min_max(arr3,6).max==34898) && (find_min_max(arr3,6).min==2)){
        printf("TEST 3 PASSED\n");
    }
    else{
        printf("TEST 3 FAILED \n");
    }

      if ((find_min_max(arr4,6).max==123333213) && (find_min_max(arr4,6).min==-12221)){
        printf("TEST 4 PASSED\n");
    }
    else{
        printf("TEST 4 FAILED \n");
    }
}