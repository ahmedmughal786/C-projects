#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employee.h"

// Function to read data from input file into struct array
int readFile(const char *filename, Employee *data, int *count)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error opening file: %s\n", filename);
        return -1;
    }

    *count = 0;
    while (fscanf(file, "%s %d %f", data[*count].name, &data[*count].age, &data[*count].wage) == 3)
    {
        (*count)++;
        if (*count >= MAX_RECORDS)
            break;
    }

    fclose(file);
    return 0;
}

// Function to write data to output file in reverse order
void writeFileInReverse(const char *filename, Employee *data, int count)
{
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("Error opening file: %s\n", filename);
        return;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        fprintf(file, "%s,%d,%.2f\n", data[i].name, data[i].age, data[i].wage);
    }

    printf("Data written to %s in reverse order.\n", filename);
    fclose(file);
}

// Function to display all records
void displayRecords(Employee *data, int count)
{
    printf("Employee Records:\n");
    for (int i = 0; i < count; i++)
    {
        printf("Name: %s, Age: %d, Wage: %.2f\n", data[i].name, data[i].age, data[i].wage);
    }
}

// Function to search for an employee by name
void searchEmployeeByName(Employee *data, int count)
{
    char searchName[50];
    printf("Enter name to search: ");
    scanf("%s", searchName);

    int found = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(data[i].name, searchName) == 0)
        {
            printf("Name: %s, Age: %d, Wage: %.2f\n", data[i].name, data[i].age, data[i].wage);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Name: %s not found.\n", searchName);
    }
}
