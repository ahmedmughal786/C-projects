# 🌡️ Water Sample Temperature Analyzer in C

This C program analyzes water temperature samples provided in **Kelvin**, converting them to **Celsius** and **Fahrenheit**, determining the **state of the sample (solid, liquid, or gas)**, and calculating useful statistics like **maximum, minimum, average temperature**, and **number of values below a threshold**.

---

## ✅ Features

- Accepts **10 temperature values in Kelvin**
- Converts temperatures to:
  - Celsius
  - Fahrenheit
- Determines the **physical state of water** at each temperature
- Finds:
  - Maximum temperature
  - Minimum temperature
  - Average temperature
  - Count of samples below a threshold temperature

---

## 🧮 Temperature State Criteria

- **Solid**: Temperature in Celsius is ≤ 0°C
- **Liquid**: Temperature in Celsius is > 0°C and < 100°C
- **Gas**: Temperature in Celsius is ≥ 100°C

---

## 📂 Functions Used

| Function                | Description                                                    |
| ----------------------- | -------------------------------------------------------------- |
| `kelvinToCelsius()`     | Converts Kelvin to Celsius                                     |
| `celsiusToFahrenheit()` | Converts Celsius to Fahrenheit                                 |
| `determineState()`      | Determines if the temperature represents Solid, Liquid, or Gas |
| `findMax()`             | Returns the maximum value in an array                          |
| `findMin()`             | Returns the minimum value in an array                          |
| `calculateAverage()`    | Computes average of all values in an array                     |
| `countBelowThreshold()` | Counts how many temperatures are below a given threshold       |
| `displayResults()`      | Prints Kelvin, Celsius, Fahrenheit, and state in a table       |

---

## 🧪 Sample Output

```
Enter temperature in Kelvin: 273
Enter temperature in Kelvin: 310
...
Enter the threshold temperature in Kelvin: 295

Kelvin   Celsius   Fahrenheit   State
273.00   -0.15     31.73        Solid
310.00   36.85     98.33        Liquid
...

Max temperature: 310.00 K
Min temperature: 273.00 K
Average temperature: 291.50 K
Number of samples below 295.00 K: 5
```

---

## ⚙️ Compilation & Execution

Use any C compiler such as GCC:

```bash

gcc main.c -o temperatureAnalyzer
./temperatureAnalyzer
```

Make sure all relevant functions are implemented either in the same file or modularly with headers.

---

## 📁 File Breakdown

```
project/
├── main.c               // Main function and logic
├── temperatureUtils.c   // Function definitions (optional)
├── temperatureUtils.h   // Function declarations
├── README.md            // Project overview (this file)
```

---

## ✍️ Author

**Ahmed Ali**
