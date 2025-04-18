#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#define MAX_RECORDS 100

typedef struct
{
    char name[50];
    int age;
    float wage;
} Employee;

// Function prototypes
int readFile(const char *filename, Employee *data, int *count);
void writeFileInReverse(const char *filename, Employee *data, int count);
void displayRecords(Employee *data, int count);
void searchEmployeeByName(Employee *data, int count);

#endif
