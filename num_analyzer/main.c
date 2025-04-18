#include <stdio.h>
#include "myMath.h"

int main()
{
  int num_1, num_2, num_3;

  // Taking input from the user
  printf("Enter three numbers: ");
  scanf("%d %d %d", &num_1, &num_2, &num_3);

  // Finding the maximum and minimum
  int max = getMax(num_1, num_2, num_3);
  int min = getMin(num_1, num_2, num_3);

  // Calculating the average
  float avg = calculateAvg(num_1, num_2, num_3);

  // Calculating differences
  int maxMinDifference = max - min;
  float maxAvgDifference = max - avg;

  // Calculating the absolute value of the minimum number
  int minAbsoluteValue = getAbsolute(min);

  // Displaying the results
  printf("Maximum: %d\n", max);
  printf("Minimum: %d\n", min);
  printf("Average: %.2f\n", avg);
  printf("Difference between max and min: %d\n", maxMinDifference);
  printf("Difference between max and average: %.2f\n", maxAvgDifference);
  printf("Absolute value of the minimum number: %d\n", minAbsoluteValue);

  return 0;
}