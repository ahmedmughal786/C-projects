# 📊 Employee Record Manager in C

This C program reads employee data (name, age, wage) from a text file, displays all records, writes the data to a CSV file, and allows the user to search for an employee by name.

---

## 📂 Files Included

- `main.c` – Handles main program execution.
- `function.c` – Contains function implementations for file I/O and search.
- `function.h` – Header file with function declarations and constants.

---

## 🔧 Features

1. **Read Data from File**  
   Reads employee records from a text file specified in the command line.

2. **Display All Records**  
   Prints all employee data to the console.

3. **Write to CSV File**  
   Saves the records to `output.csv` in CSV format.

4. **Search by Name**  
   Prompts the user to enter a name and displays the corresponding employee details.

---

## 📥 Input File Format (`input.txt`)

Each line in the file should follow this format:

```
John 30 2500.50
Alice 25 3000.00
Bob 40 4000.75
```

- **Name** (single word)
- **Age** (integer)
- **Wage** (float)

Maximum of 10 records are allowed due to the limit defined (`MAX_RECORDS`).

---

## 🛠️ How to Compile & Run

```bash
gcc main.c function.c -o recordManager
./recordManager input.txt
```

---

## 📌 Sample Output

```
All Records:
Name: John, Age: 30, Wage: 2500.50
Name: Alice, Age: 25, Wage: 3000.00
Name: Bob, Age: 40, Wage: 4000.75
Data written to output.csv successfully.
Enter name to search: Alice
Name: Alice, Age: 25, Wage: 3000.00
```

---

## 🧠 Notes

- Ensure the input file is in the same directory or provide the full path.
- Only exact name matches (case-sensitive) are considered in search.
- Supports a maximum of 10 records. Modify `MAX_RECORDS` in `function.h` to increase.

---

## 👨‍💻 Developed By

**Ahmed Ali**
