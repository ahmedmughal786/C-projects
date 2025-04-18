#include <stdio.h>
#include <stdlib.h> // For malloc and free
#include <string.h> // For strlen, strchr, strcspn

void inputString(char *buffer, int maxLength)
{
    printf("Enter a string (max length %d): ", maxLength);
    fgets(buffer, maxLength + 1, stdin);
    // Remove newline character if present
    buffer[strcspn(buffer, "\n")] = '\0';
}

void convertToLower(char *buffer)
{
    for (int i = 0; buffer[i]; i++)
    {
        // Convert to lowercase using +32 method
        if (buffer[i] >= 'A' && buffer[i] <= 'Z')
        {
            buffer[i] += 32; // Convert to lowercase by adding 32
        }
    }
}

char *extractVowels(const char *source, int *count)
{
    int len = strlen(source);
    char *vowelArray = (char *)malloc((len + 1) * sizeof(char));
    *count = 0;

    for (int i = 0; source[i]; i++)
    {
        if (strchr("aeiou", source[i]))
        {
            vowelArray[(*count)++] = source[i];
        }
    }
    vowelArray[*count] = '\0'; // Null-terminate the array
    return vowelArray;
}

void analyzeVowelOccurrence(const char *vowelStr)
{
    int vowelFrequency[5] = {0};                   // For a, e, i, o, u
    int firstAppearance[5] = {-1, -1, -1, -1, -1}; // Store first occurrence index

    for (int i = 0; vowelStr[i]; i++)
    {
        switch (vowelStr[i])
        {
        case 'a':
            vowelFrequency[0]++;
            if (firstAppearance[0] == -1)
                firstAppearance[0] = i;
            break;
        case 'e':
            vowelFrequency[1]++;
            if (firstAppearance[1] == -1)
                firstAppearance[1] = i;
            break;
        case 'i':
            vowelFrequency[2]++;
            if (firstAppearance[2] == -1)
                firstAppearance[2] = i;
            break;
        case 'o':
            vowelFrequency[3]++;
            if (firstAppearance[3] == -1)
                firstAppearance[3] = i;
            break;
        case 'u':
            vowelFrequency[4]++;
            if (firstAppearance[4] == -1)
                firstAppearance[4] = i;
            break;
        }
    }

    const char *vowels = "aeiou";
    for (int i = 0; i < 5; i++)
    {
        if (vowelFrequency[i] > 0)
        {
            printf("'%c' occurs %d time(s) and first appears at index %d.\n", vowels[i], vowelFrequency[i], firstAppearance[i]);
        }
        else
        {
            printf("'%c' does not appear in the string.\n", vowels[i]);
        }
    }
}
