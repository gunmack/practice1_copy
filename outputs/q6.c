#include <stdio.h>

// run the following code

int main() {
    char ca = 'a';
    char cb = 'b';

    char* const ptr1_char = &ca;
    char* ptr2_char = &cb;
    ptr2_char = ptr1_char;

    printf("%c\n", *ptr1_char);
    printf("%c\n", *ptr2_char);
    return 0;
}