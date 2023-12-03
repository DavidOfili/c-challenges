#include <stdio.h>

int main() {
    /**
     * @file challenge1.c
     * @brief C Intermediate Challenge 1
     * 
     * The program prints in reverse order, any string (word) entered by a user
     * 
     * @author David N. Ofili
     * @bug No known bugs
    */

    char word[50];
    int word_length = 0;

    puts("Enter a word");
    fgets(word, 50, stdin);

    // Determine word length
    while (word[word_length] != '\0') {
        word_length++;
    }

    // Loop through the character array and print characters in reverse order
    for (int i = word_length; i >= 0; i--) {
        if (word[i] == '\0') {
            puts("\n");
        } else {
            printf("%c ", word[i]);
        }
    }
    
    puts("\n");

    return 0;
}