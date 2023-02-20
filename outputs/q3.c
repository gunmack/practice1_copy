#include <stdio.h>

// Question 3 output

int main(){

    const char c = 'a';

    char* ptr_char = &c;
    *ptr_char = 'B';
    
    printf("%c\n", c);
    return 0;

}