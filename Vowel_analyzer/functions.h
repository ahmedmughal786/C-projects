#ifndef STRINGS_UTILS_H
#define STRINGS_UTILS_H

void inputString(char *buffer, int maxLength);
void convertToLower(char *buffer);
char *extractVowels(const char *source, int *count);
void analyzeVowelOccurrence(const char *vowelStr);

#endif