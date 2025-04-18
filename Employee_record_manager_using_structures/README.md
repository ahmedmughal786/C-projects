# 👨‍💼 Employee Record Manager Using Structures in C

This program uses **C structures** to store and manage employee information such as names, ages, and wages. It reads from a file, displays records, allows searching by name, and writes the data to an output file in **reverse order**.

---

## 📁 Project Structure

- `main.c` – Entry point of the program.
- `employee.h` – Header file containing structure definitions and function declarations.
- `employee.c` – Contains the implementation of core functionalities.

---

## 🧠 Features

✅ Read employee data from a text file  
✅ Display all employee records on screen  
✅ Search employee by name  
✅ Write data to an output file in **reverse order**  
✅ Uses **structs** for clean data handling

---

## 🔤 Input Format (`input.txt`)

Each line of the input file should contain:

```
Name Age Wage
```

Example:

```
Ahmed 30 5000.75
Ali 25 4000.50
Sarah 28 4500.00
```

---

## ⚙️ Compilation & Execution

```bash
gcc main.c employee.c -o employeeManager
./employeeManager input.txt
```

---

## 🧪 Sample Output

```
Employee Records:
Name: Ahmed, Age: 30, Wage: 5000.75
Name: Ali, Age: 25, Wage: 4000.50
Name: Sarah, Age: 28, Wage: 4500.00

1. Search by Name
2. Write Data in Reverse to File and Exit
Choose an option: 1
Enter name to search: Sarah
Name: Sarah, Age: 28, Wage: 4500.00

Data written to output.csv in reverse order.
```

---

## 📦 Output File (output.csv)

```
Sarah,28,4500.00
Ali,25,4000.50
Ahmed,30,5000.75
```

---

## 📝 Notes

- The program supports **up to 100 records** (modifiable in `employee.h` by changing `MAX_RECORDS`).
- The search is **case-sensitive**.
- Data is written to `output.csv` even if the user skips the search.

---

## 👨‍💻 Developed By

**Ahmed Ali**
