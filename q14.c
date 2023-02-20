#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

////////////////////
// Write a function 
// that gets a string (array of chars ending with '\0') and 
// checks if it is a palindrome
///////////////////

bool is_palindrome(const char* str){
    return false;
}


int main(){
    const char* str1 = "ardra";
    const char* str2 = "kaiyak";
    const char* str3 = "racecar";
    const char* str4 = "truro";
    const char* str5 = "detartrated";
    const char* str6 = "mesopotamia";

    if (is_palindrome(str1) == true){
        printf("TEST 1 PASSED\n");
    }
    else{
        printf("TEST 1 FAILED\n");
    }

    if (is_palindrome(str2) == false){
        printf("TEST 2 PASSED\n");
    }
    else{
        printf("TEST 2 FAILED\n");
    }

    if (is_palindrome(str3) == true){
        printf("TEST 3 PASSED\n");
    }
    else{
        printf("TEST 3 FAILED\n");
    }

    if (is_palindrome(str4) == false){
        printf("TEST 4 PASSED\n");
    }
    else{
        printf("TEST 4 FAILED\n");
    }

    if (is_palindrome(str5) == true){
        printf("TEST 5 PASSED\n");
    }
    else{
        printf("TEST 5 FAILED\n");
    }

    if (is_palindrome(str6) == false){
        printf("TEST 6 PASSED\n");
    }
    else{
        printf("TEST 6 FAILED\n");
    }

}
