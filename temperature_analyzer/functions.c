#include <stdio.h>
#include "temperature.h"

// Function to read temperatures
void readTemperatures(float kelvin[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter temperature %d in Kelvin: ", i + 1);
        scanf("%f", &kelvin[i]);
    }
}

// Convert Kelvin to Celsius
float kelvinToCelsius(float kelvin)
{
    return kelvin - 273.15;
}

// Convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

// Determine the state of water
void determineState(float celsius)
{
    if (celsius <= 0)
    {
        printf("Solid");
    }
    else if (celsius >= 100)
    {
        printf("Gas");
    }
    else
    {
        printf("Liquid");
    }
}

// Find the maximum value in the array
float findMax(float arr[], int size)
{
    float max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

// Find the minimum value in the array
float findMin(float arr[], int size)
{
    float min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

// Calculate the average of the array
float calculateAverage(float arr[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

// Count samples below a threshold
int countBelowThreshold(float arr[], int size, float threshold)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < threshold)
        {
            count++;
        }
    }
    return count;
}

// Display results
void displayResults(float kelvin[], float celsius[], float fahrenheit[], int size)
{
    printf("Kelvin   Celsius   Fahrenheit   State\n");
    for (int i = 0; i < size; i++)
    {
        printf("%.2f     %.2f     %.2f        ", kelvin[i], celsius[i], fahrenheit[i]);
        determineState(celsius[i]);
        printf("\n");
    }
}
