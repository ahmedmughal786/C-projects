#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define MAX_RECORDS 10
#define MAX_NAME_LEN 50

void readDataFromFile(const char *filename, char names[][MAX_NAME_LEN], int ages[], float wages[], int *count);
void writeDataToCSV(const char *filename, char names[][MAX_NAME_LEN], int ages[], float wages[], int count);
void searchByName(char names[][MAX_NAME_LEN], int ages[], float wages[], int count, const char *search_name);
void display_result(char names[][MAX_NAME_LEN], int ages[], float wages[], int count);

#endif