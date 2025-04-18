#ifndef TEMPERATURE_H
#define TEMPERATURE_H

// Function Prototypes
void readTemperatures(float kelvin[], int size);
float kelvinToCelsius(float kelvin);
float celsiusToFahrenheit(float celsius);
void determineState(float celsius);
float findMax(float arr[], int size);
float findMin(float arr[], int size);
float calculateAverage(float arr[], int size);
int countBelowThreshold(float arr[], int size, float threshold);
void displayResults(float kelvin[], float celsius[], float fahrenheit[], int size);

#endif