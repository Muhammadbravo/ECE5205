/*
Write a C program that counts and displays the number of  
consonants and vowels in a given character string. 
Modify the code to eliminate all vowels within the string  
and display only consonants. Store each consonant in a different  
memory location using a pointer.
*/

#include <stdio.h>
int main() {
    char line[150];
    int vowels, consonant, *p;

    vowels = consonant = 0;

    printf("Enter a line of string: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; ++i) {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
            line[i] == 'U') {
            ++vowels;
        } else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
            ++consonant;
        }
    }

    

    for (int i = 0, j; line[i] != '\0'; ++i) {

      // enter the loop if the character is not an vowel
      // and not the null character
      while (!(line[i] != 'a' && line[i] != 'e' && line[i] != 'i' && line[i] != 'o' && line[i] != 'u'
            && line[i] != 'A' && line[i] != 'E' && line[i] != 'I' && line[i] != 'O' && line[i] != 'U')
            && !(line[i] == '\0')) {
         for (j = i; line[j] != '\0'; ++j) {

            // if jth element of line is not an vowel,
            // assign the value of (j+1)th element to the jth element
            line[j] = line[j + 1];
         }
         line[j] = '\0';
      }
   }
    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nEliminating all vowels... %s", line);

    return 0;
}