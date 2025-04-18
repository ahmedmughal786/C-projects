#include <stdio.h>
#include <string.h>
#include "function.h"

// Function to read data from input file
void readDataFromFile(const char *filename, char names[][MAX_NAME_LEN], int ages[], float wages[], int *count)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error: Unable to open file %s\n", filename);
        *count = 0;
        return;
    }

    int i = 0;
    while (fscanf(file, "%s %d %f", names[i], &ages[i], &wages[i]) != EOF && i < MAX_RECORDS)
    {
        i++;
    }
    *count = i;

    fclose(file);
}

// Function to write data to CSV file
void writeDataToCSV(const char *filename, char names[][MAX_NAME_LEN], int ages[], float wages[], int count)
{
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("Error: Unable to open file %s\n", filename);
        return;
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(file, "%s,%d,%.2f\n", names[i], ages[i], wages[i]);
    }

    fclose(file);
    printf("Data written to %s successfully.\n", filename);
}

// Function to search by name and display result
void searchByName(char names[][MAX_NAME_LEN], int ages[], float wages[], int count, const char *search_name)
{
    int found = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(names[i], search_name) == 0)
        {
            printf("Name: %s, Age: %d, Wage: %.2f\n", names[i], ages[i], wages[i]);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Name not found.\n");
    }
}

// Display all records
void display_result(char names[][MAX_NAME_LEN], int ages[], float wages[], int count)
{
    printf("All Records:\n");
    for (int i = 0; i < count; i++)
    {
        printf("Name: %s, Age: %d, Wage: %.2f\n", names[i], ages[i], wages[i]);
    }
}
