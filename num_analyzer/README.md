# 📊 Number Analyzer in C

This C program performs multiple mathematical operations on three user-input numbers using custom functions defined in a separate header file (`myMath.h`).

## 📄 Description

The program:

- Accepts **three integers** from the user.
- Finds the **maximum** and **minimum** using custom functions.
- Calculates the **average** of the numbers.
- Computes:
  - The **difference between max and min**
  - The **difference between max and average**
  - The **absolute value** of the minimum number

All calculations are done using modular functions declared in `myMath.h`.

---

## 🗂 File Structure

```

project_folder/
│
├── main.c // Main program file
├── myMath.h // Custom header file with function declarations
├── myMath.c // Source file with function definitions (optional)
└── README.md // This file

```

---

## ⚙️ How to Compile and Run

1. Ensure both `main.c` and `myMath.h` (plus `myMath.c` if you use it) are in the same directory.
2. Compile the program using GCC:

```bash

gcc main.c myMath.c -o numberAnalyzer
```

3. Run the executable:

```bash

./numberAnalyzer
```

---

## 🧪 Sample Input/Output

**Input:**

```
Enter three numbers: 5 -2 9
```

**Output:**

```
Maximum: 9
Minimum: -2
Average: 4.00
Difference between max and min: 11
Difference between max and average: 5.00
Absolute value of the minimum number: 2
```

---

## 🔧 Function Overview (`myMath.h`)

Ensure your `myMath.h` contains the following function declarations:

```c
int getMax(int a, int b, int c);
int getMin(int a, int b, int c);
float calculateAvg(int a, int b, int c);
int getAbsolute(int num);
```

And your `myMath.c` (if separate) should contain the function definitions.

---

## 👤 Author

**Ahmed Ali**
