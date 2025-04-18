# Vowel String Analyzer in C

This is a C program that allows a user to input a string, convert it to lowercase, extract all the vowels, and analyze their occurrences and positions. It demonstrates modular programming by separating function declarations, definitions, and main execution.

## 📂 File Structure

- `main.c` – The main program logic that interacts with the user.
- `function.c` – Contains the implementation of utility functions.
- `header.h` – Header file with function declarations.

## 🧠 Program Features

1. Prompts the user to enter a maximum length for the string (up to 100).
2. Accepts a string input from the user.
3. Converts the entire string to lowercase.
4. Extracts vowels (`a, e, i, o, u`) from the string.
5. Displays:
   - All extracted vowels.
   - Frequency of each vowel.
   - First appearance index of each vowel.
6. Dynamically allocates and frees memory for vowel extraction.

## 🛠️ How to Compile

Use any C compiler like GCC:

```bash
gcc main.c function.c -o vowelAnalyzer
```

Then run the program:

```bash
./vowelAnalyzer
```

## 📌 Sample Output

```
Enter the maximum length of the string (<= 100): 50
Enter a string (max length 50): Welcome to RT Welfare
Lowercase string: welcome to rt welfare
Extracted vowels: eoeoaee
'e' occurs 3 time(s) and first appears at index 0.
'o' occurs 2 time(s) and first appears at index 1.
'a' occurs 1 time(s) and first appears at index 5.
'i' does not appear in the string.
'u' does not appear in the string.
```

## 📋 Notes

- Only lowercase vowels are processed after conversion.
- Memory used for storing vowels is freed after use.
- Maximum input length is capped at 100 characters.

## 👨‍💻 Developed By

**Ahmed Ali**
