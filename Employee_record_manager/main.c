#include <stdio.h>
#include "function.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s input.txt\n", argv[0]);
        return 1;
    }

    char names[MAX_RECORDS][MAX_NAME_LEN];
    int ages[MAX_RECORDS];
    float wages[MAX_RECORDS];
    int count;

    // Read data from input file
    readDataFromFile(argv[1], names, ages, wages, &count);

    // Display all records
    display_result(names, ages, wages, count);

    // Write data to CSV file
    writeDataToCSV("output.csv", names, ages, wages, count);

    // Ask for name to search
    char search_name[MAX_NAME_LEN];
    printf("Enter name to search: ");
    scanf("%s", search_name);

    // Search and display result
    searchByName(names, ages, wages, count, search_name);

    return 0;
}
