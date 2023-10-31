#include <stdio.h>

int main() {
    /**
     * @file challenge3.c
     * @brief C Basic Challenge 3
     * 
     * The program displays the maximum sizes of basic data types — char, double, float, and int.
     * 
     * @author David N. Ofili
     * @bug No known bugs
    */
    
    // Display data type sizes using the "sizeof()" function and the %zu format specifier
    printf("Max size of 'char' is %zu byte\n", sizeof(char));
    printf("Max size of 'double' is %zu bytes\n", sizeof(double));
    printf("Max size of 'float' is %zu bytes\n", sizeof(float));
    printf("Max size of 'int' is %zu bytes\n", sizeof(int));

    return 0;
}