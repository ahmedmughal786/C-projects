# Vehicle Speed Fine Calculator

## Language:

C

## Description:

This is a simple C program that determines if a vehicle is speeding and calculates the corresponding fine based on its speed. The program prompts the user to enter the speed of a vehicle and then applies the following rules:

- If the speed is less than or equal to 60 km/h, it's considered within the speed limit.
- Speeds up to 65 km/h result in a warning only.
- Speeds between 66–70 km/h result in a fine of $80.
- Speeds between 71–80 km/h result in a fine of $150.
- Speeds above 80 km/h result in a fine of $500.

## How to Compile:

bash
gcc main.c -o speed_fine

## How to Run:

bash
./speed_fine

## Sample Output:

Enter the speed of the vehicle (km/h): 72
Speeding
Fine: $150

## Features:

- Validates negative input
- Outputs proper fines based on defined speed ranges
- Easy-to-understand logic with constants for better maintainability

## Author:

Ahmed Ali
