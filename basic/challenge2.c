#include <stdio.h>

int main() {
    /**
     * @file challenge2.c
     * @brief C Basic Challenge 2
     * 
     * The program takes two integers as input, adds them, and displays the sum.
     * 
     * @author David N. Ofili
     * @bug No known bugs
    */
    
    // Declare necessary variables
    int number1;
    int number2;
 
    // Prompt user for the value of number1
    puts("Enter first number: ");
    scanf("%d", &number1);

    // Prompt user for the value of number2
    puts("Enter second number: ");
    scanf("%d", &number2);

    // Add both integers and display their sum
    printf("%d + %d = %d\n", number1, number2, number1 + number2);

    return 0;
}