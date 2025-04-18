#include <stdio.h>
#include <stdlib.h> // Include this for malloc and free
#include "functions.h"

int main()
{
    const int MAX_LENGTH = 100;
    char userInput[MAX_LENGTH];
    int maxLength;

    // Step 1: Get the maximum length from the user
    do
    {
        printf("Enter the maximum length of the string (<= 100): ");
        scanf("%d", &maxLength);
        while (getchar() != '\n')
            ; // Clear the input buffer
    } while (maxLength > 100 || maxLength <= 0);

    // Step 2: Read the string from the user
    inputString(userInput, maxLength);

    // Step 3: Convert the input string to lowercase
    convertToLower(userInput);
    printf("Lowercase string: %s\n", userInput);

    // Step 4: Extract vowels to a dynamically allocated string
    int vowelCount;
    char *extractedVowels = extractVowels(userInput, &vowelCount);

    if (vowelCount > 0)
    {
        printf("Extracted vowels: %s\n", extractedVowels);

        // Step 5: Analyze occurrences of each vowel and find their first occurrence
        analyzeVowelOccurrence(extractedVowels);
    }
    else
    {
        printf("No vowels found in the string.\n");
    }

    // Free dynamically allocated memory
    free(extractedVowels);

    return 0;
}
