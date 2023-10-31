#include <stdio.h>

int main() {
    /**
     * @file challenge1.c
     * @brief C Basic Challenge 1
     * 
     * The program calculates the area of a triangle using the formula 
     * 1/2 base x height (half the base multiplied by the height)
     * 
     * @author David N. Ofili
     * @bug No known bugs
    */
    
    // Declare necessary variables
    int base;
    int height;
    int area;

    // Prompt user for the value of the base
    puts("Enter 'base' value: ");
    scanf("%d", &base);

    // Prompt user for the value of the height
    puts("Enter 'height' value: ");
    scanf("%d", &height);

    // Calculate area of a triangle
    area = (base / 2) * height;

    // Print result
    printf("Area = %d\n", area);

    return 0;
}