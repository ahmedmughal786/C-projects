#include "myMath.h"

// Function to find the maximum of three numbers
int getMax(int num_1, int num_2, int num_3)
{
    int largest = num_1;
    if (num_2 > largest)
    {
        largest = num_2;
    }
    if (num_3 > largest)
    {
        largest = num_3;
    }
    return largest;
}

// Function to find the minimum of three numbers
int getMin(int num_1, int num_2, int num_3)
{
    int smallest = num_1;
    if (num_2 < smallest)
    {
        smallest = num_2;
    }
    if (num_3 < smallest)
    {
        smallest = num_3;
    }
    return smallest;
}

// Function to calculate the average of three numbers
float calculateAvg(int num_1, int num_2, int num_3)
{
    return (num_1 + num_2 + num_3) / 3.0;
}

// Function to find the absolute value of a number
int getAbsolute(int val)
{
    if (val < 0)
    {
        return -val; // If val is negative, return its negation (i.e., positive equivalent).
    }
    else
    {
        return val; // If val is positive or zero, return it as is.
    }
}
