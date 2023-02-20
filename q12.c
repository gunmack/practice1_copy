#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/////////////////////
// Write a function that gets a string (array of chars ending with '\0') 
// and reverses it in place
/////////////////////
// function should be type void
// return type for testing purposes

char* reverse(char str[]){
    return str;
    
}

int main(){ 
    char word1[] = "Hello";
    char word2[] = "penetrate";
    char word3[] = "excitement";
    char word4[] = "ewrewf&&ksdf@!!";
    char word5[] = "&@@#*@#dsdfahu!@#";
    char word6[] = "redivider";
    char word7[] = "civics";

   
    if (strcmp(reverse(word1),"olleH") == 0){
        printf("TEST 1 PASSED\n");
    }
    else{
        printf("TEST 1 FAILED\n");
    } 

    if (strcmp(reverse(word2),"etartenep") == 0){
        printf("TEST 2 PASSED\n");
    }
    else{
        printf("TEST 2 FAILED\n");
    }

    if (strcmp(reverse(word3),"tnemeticxe") == 0){
        printf("TEST 3 PASSED\n");
    }
    else{
        printf("TEST 3 FAILED\n");
    }
    
    if (strcmp(reverse(word4),"!!@fdsk&&fwerwe") == 0){
        printf("TEST 4 PASSED\n");
    }
    else{
        printf("TEST 4 FAILED\n");
    }

    if (strcmp(reverse(word5),"#@!uhafdsd#@*#@@&") == 0){
        printf("TEST 5 PASSED\n");
    }
    else{
        printf("TEST 5 FAILED\n");
    }

    if (strcmp(reverse(word6),"redivider") == 0){
        printf("TEST 6 PASSED\n");
    }
    else{
        printf("TEST 6 FAILED\n");
    }

    if (strcmp(reverse(word7),"scivic") == 0){
        printf("TEST 7 PASSED\n");
    }
    else{
        printf("TEST 7 FAILED\n");
    }
   
 
}