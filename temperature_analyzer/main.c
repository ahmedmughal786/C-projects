#include <stdio.h>
#include "temperature.h" // Include the header file with function prototypes

#define SIZE 10 // Define the number of temperature samples

int main(void)
{
  float kelvin[SIZE], celsius[SIZE], fahrenheit[SIZE];
  float threshold;
  int belowThresholdCount;

  // Read temperatures
  readTemperatures(kelvin, SIZE);

  // Convert temperatures
  for (int i = 0; i < SIZE; i++)
  {
    celsius[i] = kelvinToCelsius(kelvin[i]);
    fahrenheit[i] = celsiusToFahrenheit(celsius[i]);
  }

  // Display temperatures and states
  displayResults(kelvin, celsius, fahrenheit, SIZE);

  // Find and display max, min, and average
  printf("Max temperature: %.2f K \n", findMax(kelvin, SIZE));
  printf("Min temperature: %.2f K \n", findMin(kelvin, SIZE));
  printf("Average temperature: %.2f K \n", calculateAverage(kelvin, SIZE));

  // Count samples below threshold
  printf("Enter a threshold temperature in Kelvin: ");
  scanf("%f", &threshold);
  belowThresholdCount = countBelowThreshold(kelvin, SIZE, threshold);
  printf("Number of samples below %.2f K: %d \n", threshold, belowThresholdCount);

  return 0;
}
