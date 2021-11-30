/*
Write a C program that counts and displays the number of  
consonants and vowels in a given character string. 
Modify the code to eliminate all vowels within the string  
and display only consonants. Store each consonant in a different  
memory location using a pointer.
*/

#include <stdio.h>
int main() {
    char arr[150], *p;
    int vowels, consonant;

    vowels = consonant = 0;

    printf("Enter a string: ");
    fgets(arr, sizeof(arr), stdin);

    p = arr;

    for (int i = 0; arr[i] != '\0'; ++i) {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' ||
            arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' ||
            arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' ||
            arr[i] == 'U') {
            ++vowels;
        } else if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')) {
            ++consonant;
            ++p;
            printf("\nMemory location of %c == %p", arr[i], p);


        }
    }

    
    for (int i = 0, j; arr[i] != '\0'; ++i) {

      // enter the loop if the character is not an vowel
      // and not the null character
      while (!(arr[i] != 'a' && arr[i] != 'e' && arr[i] != 'i' && arr[i] != 'o' && arr[i] != 'u'
            && arr[i] != 'A' && arr[i] != 'E' && arr[i] != 'I' && arr[i] != 'O' && arr[i] != 'U')
            && !(arr[i] == '\0')) {
         for (j = i; arr[j] != '\0'; ++j) {

            // if jth element of arr is not vowel,
            // assign the value of (j+1)th element to the jth element
            arr[j] = arr[j + 1];
         }
         arr[j] = '\0';
      }
   }
    printf("\n\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nEliminating all vowels... %s", arr);

    getchar();

    return 0;
}