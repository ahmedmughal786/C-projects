#include <stdio.h>
#include "employee.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    Employee records[MAX_RECORDS];
    int line_count;

    // Read records from the input file
    if (readFile(argv[1], records, &line_count) == -1)
    {
        return 1;
    }

    // Display records
    displayRecords(records, line_count);

    // Search for a record by name (optional)
    int choice;
    printf("\n1. Search by Name\n2. Write Data in Reverse to File and Exit\nChoose an option: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        searchEmployeeByName(records, line_count);
    }

    // Write records to the output file
    writeFileInReverse("output.csv", records, line_count);

    return 0;
}
