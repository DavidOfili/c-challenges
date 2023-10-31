#include <stdio.h>

int main() {
    /**
     * @file challenge3.c
     * @brief C Basic Challenge 3 
     * 
     * The program calculates the area of a circle, prompting the user for the radius.
     * The formula used is πr2 (Pi R-squared)
     * 
     * @author David N. Ofili
     * @bug No known bugs
    */
    
    // Declare necessary variables
    float pi = 3.14159;
    float radius, area;

    // Prompt user for the value of the base
    puts("Enter radius: ");
    scanf("%f", &radius);

    // Calculate area of a circle
    area = pi * radius * radius;

    // Print result approximated to two decimal places
    printf("Area = %.2f\n", area);

    return 0;
}